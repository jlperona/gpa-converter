/**
 * \file conversion.cpp This file contains implementation details for helper functions for conversions.
 */

#include "conversion.hpp"

void throwInvalidGradeError(std::string input, std::string gradeScale)
{
    std::cerr << "ERROR: Invalid grade '" << input << "' in student using grade scale '"
              << gradeScale << "'." << std::endl;

    exit(EXIT_FAILURE);
} // throwInvalidGradeError()
