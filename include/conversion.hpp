/**
 * \file conversion.hpp This file contains the conversion functions for various
 * non-US grading scales. This conversion information is taken from:
 * foreigncredits.com/resources/grade-conversion
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
/**
 * Convert the most common scale in China, the 100 point scale.
 * \param input The input grade, expected to be between 0 - 100.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertChina(std::string input, std::string gradeScale);
/**
 * Convert another Indian scale, the UGC 10 point scale.
 * \param input The input grade, expected to be between 0 - 100.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertIndia10(std::string input, std::string gradeScale);
/**
 * Convert the most common scale in India, the 100 point scale.
 * \param input The input grade, expected to be between 0 - 100 or 'G'.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertIndia100(std::string input, std::string gradeScale);
/**
 * Convert the five point scale used in Saudi Arabia.
 * \param input The input grade, expected to be between 0 - 5.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertSaudiArabia5(std::string input, std::string gradeScale);
/**
 * Convert the most common scale in Switzerland, the 6 point scale.
 * \param input The input grade, expected to be between 0 - 6.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertSwitzerland6(std::string input, std::string gradeScale);
/**
 * Convert a United States letter grade. Note that since there is a routine to do this already,
 * this function is limited to verification of inputted grades.
 * \param input The input grade, expected to be between 0 - 100.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertUnitedStates(std::string input, std::string gradeScale);

#endif
