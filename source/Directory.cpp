#include "Directory.h"

using namespace std;
using namespace std::filesystem;

Directory::Directory(DirEntity &dir) : dir(dir) {}

void Directory::create(void)
{
    create_directory(this->dir.getFullDirPath());
}

vector<string> Directory::scan(void)
{
    vector<string> objectsInDir;
    for (const auto &object : directory_iterator(this->dir.getFullDirPath()))
    {
        objectsInDir.push_back(object.path().filename().string());
    }
    // vector<string> filenames;
    // try
    // {
    //     if (fs::exists(path) && fs::is_directory(path))
    //     {
    //         std::cout << "Содержимое директории: " << path << std::endl;

    //         for (const auto &entry : fs::directory_iterator(path))
    //         {
    //             // Преобразуем имя файла в std::string и добавляем в вектор
    //             filenames.push_back(entry.path().filename().string());
    //         }

    //         // Выводим все имена файлов из вектора
    //         for (const auto &name : filenames)
    //         {
    //             std::cout << name << std::endl;
    //         }
    //     }
    //     else
    //     {
    //         std::cout << "Указанный путь не существует или не является директорией." << std::endl;
    //     }
    // }
    // catch (const fs::filesystem_error &e)
    // {
    //     std::cerr << "Ошибка файловой системы: " << e.what() << std::endl;
    // }
    // catch (const std::exception &e)
    // {
    //     std::cerr << "Общая ошибка: " << e.what() << std::endl;
    // }
    return objectsInDir;
}

bool Directory::dirExists(void)
{
    return exists(this->dir.getFullDirPath());
}