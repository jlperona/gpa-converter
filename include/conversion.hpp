/**
 * \file conversion.hpp This file contains helper functions for conversions.
 */

#ifndef CONVERSION_HPP
#define CONVERSION_HPP

#include <iostream>
#include <string>

/**
 * Print an error saying an invalid grade has been input, and exit.
 * \param input The input that caused the error.
 * \param gradeScale The grade scale name that the error occurred in.
 */
void throwInvalidGradeError(std::string input, std::string gradeScale);

#endif
