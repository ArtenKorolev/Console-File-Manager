#include "Commands.h"


class CreateFileCommand : public CommandWithFile
{
public:
	void run(FileEntity &entity) override
	{
		File file(entity);
		file.save();
	}
};

class RemoveFileCommand : public CommandWithFile
{
public:
	void run(FileEntity& entity) override
	{
		File file(entity);

		if (file.isFile()) {
			file.del();
		}
	}
};

class ReadFileCommand : public CommandWithFile
{
public:
	void run(FileEntity& entity) override
	{
		File file(entity);
		vector<string> fileContent = file.read();

		cout << (file.isSaved() ? "" : "*");
		cout << entity.getFullPath() << ':' << endl;

		for (auto& i : fileContent) {
			cout << i << endl;
		}
	}
};

class WriteFileCommand : CommandWithFile 
{
public:
	void run(FileEntity &entity) 
	{
		File file(entity);

		vector<string> content;
		string line;

		cout << "Start typing! Type \"$end\" to stop file's record\n:\n";
		while (true)
		{
			getline(cin, line);
			if (line == "$end") {
				break;
			}
			content.push_back(line);
		}

		for (auto& i : content) {
			file.wirteBack(i);
		}

		string ans;
		cout << "Save this file's changes?[y/n]\n";
		getline(cin, ans);

		if (ans == "y") {
			file.save();
		}
	}
};

class ScanDirCommand : CommandWithDir 
{
public:
	void run(DirEntity& entity) override
	{
		Directory dir(entity);
		for (auto& i : dir.scan()) {
			cout << i << endl;
		}
	}
};

class CreateDirCommand : CommandWithDir
{
public:
	void run(DirEntity& entity) override 
	{
		Directory dir(entity);
		dir.create();
	}
};
