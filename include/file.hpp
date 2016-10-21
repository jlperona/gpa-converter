/**
 * \file file.hpp This file contains functions for file input and output.
 */

#ifndef FILE_HPP
#define FILE_HPP

#include "student.hpp"

#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

/**
 * Parse the passed in CSV into representative Student and Course objects.
 * \param inputFileName The filename to be read from. Passed from command line.
 * \param students The vector of students and their classes.
 * \param noHeader Flag for whether or not there is a header line. Passed from command line.
 */
void parseCsv(std::string inputFileName, std::vector<Student> &students, bool noHeader);
/**
 * Create an output file of final GPAs.
 * \param outputFileName The filename to be written to. Passed from command line.
 * \param students The vector of students and their classes.
 */
void createOutput(std::string outputFileName, std::vector<Student> &students);

#endif
