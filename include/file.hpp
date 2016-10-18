#ifndef FILE_HPP
#define FILE_HPP

#include "student.hpp"

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

void parseCsv(std::string inputFileName, std::vector<Student> &students);
void createOutput(std::string outputFileName, std::vector<Student> &students);

#endif