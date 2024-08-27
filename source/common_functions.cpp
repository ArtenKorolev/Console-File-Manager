#include <string>
#include <cstring>
#include "common_functions.h"

using namespace std;

bool endsWith(string str, char end) 
{
	if (str[strlen(str.c_str()) - 1] == end) {
		return true;
	}
	return false;
}

bool str_contains(std::string str, char value)
{
	for (int i = 0;i < str.size();i++) 
	{
		if (str[i] == value) {
			return true;
		}
	}

	return false;
}

bool isPrefix(std::string str, std::string prefix)
{
	if (str.size() < prefix.size()) 
	{
		return false;
	}

	for (int i = 0;i < prefix.size();i++) 
	{
		if (str[i] != prefix[i]) {
			return false;
		}
	}

	return true;
}

std::vector<std::string> separate(std::string str)
{
	vector<string> words;
	string word;

	for (int i = 0;i < str.size();i++) 
	{
		if (str[i] != ' ') {
			word += str[i];

			if (i == str.size() - 1) {
				words.push_back(word);
			}
		}
		else if (str[i] == ' ' && str[i - 1] != ' ')
		{
			words.push_back(word);
			word = "";
		}
	}

	return words;
}

template<class T>
bool contains(vector<T> vec, T value)
{
	for (auto &i : vec) 
	{
		if (i == value) {
			return true;
		}
	}

	return false;
}
