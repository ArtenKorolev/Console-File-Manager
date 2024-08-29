#pragma once
#include <string>
#include <vector>

bool endsWith(std::string str, char end);

bool m_contains(std::vector<std::string> vec, std::string value);

bool str_contains(std::string str, char value);

bool isPrefix(std::string str, std::string prefix);

std::vector<std::string> separate(std::string str);
