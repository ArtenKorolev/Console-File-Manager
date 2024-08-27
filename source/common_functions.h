#pragma once
#include <string>
#include <vector>

bool endsWith(std::string str, char end);

template <class T>
bool contains(std::vector<T> vec, T value);

bool str_contains(std::string str, char value);

bool isPrefix(std::string str, std::string prefix);

std::vector<std::string> separate(std::string str);
