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
 * Convert a United States letter grade. Note that since there is a routine to do this already,
 * this function is limited to verification of inputted grades.
 * \param input The input grade, expected to be between 0 - 100.
 * \return The US letter grade equivalent.
 */
std::string convertUnitedStates(std::string input);
/**
 * Convert the most common scale in China, the 100 point scale.
 * \param input The input grade, expected to be between 0 - 100.
 * \return The US letter grade equivalent.
 */
std::string convertChina(std::string input);
/**
 * Convert the most common scale in India, the 100 point scale.
 * \param input The input grade, expected to be between 0 - 100 or 'G'.
 * \return The US letter grade equivalent.
 */
std::string convertIndia100(std::string input);

/**
 * Convert another Indian scale, the UGC 10 point scale.
 * \param input The input grade, expected to be between 0 - 100.
 * \return The US letter grade equivalent.
 */
std::string convertIndia10(std::string input);

#endif
