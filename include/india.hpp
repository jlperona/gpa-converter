/**
 * \file india.hpp This file contains functions for grade scales for Indian universities.
 */

#ifndef INDIA_HPP
#define INDIA_HPP

#include "conversion.hpp"

#include <iostream>
#include <string>

/**
 * Convert the UGC 10 point scale in use for India.
 * This function accepts only strings, and passes the converted string to the overloaded double function to convert.
 * \param input The input grade, expected to be a string between 0 - 10.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertIndia10(std::string input, std::string gradeScale);

/**
 * Convert the UGC 10 point scale in use for India.
 * This function does the actual conversion.
 * \param grade The input grade, expected to be a double between 0 - 10.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertIndia10(double grade, std::string gradeScale);

/**
 * Convert a 10 point scale in use at VIT University in India, among others.
 * \param input The input grade.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertIndia10VIT(std::string input, std::string gradeScale);

/**
 * Convert the 100 point scale in use for India.
 * This function accepts only strings, and passes the converted string to the overloaded double function to convert.
 * \param input The input grade, expected to be a string between 0 - 100.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertIndia100(std::string input, std::string gradeScale);

/**
 * Convert the 100 point scale in use for India.
 * This function does the conversion, as convertIndiaMarks() also uses the 100 point scale.
 * \param grade The input grade, expected to be between a double between 0 - 100.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertIndia100(double grade, std::string gradeScale);

/**
 * Convert the 100 point scale in use for India.
 * The marks are considered the maximum grade, 100%.
 * The input grade is then converted to be a percentage of the marks.
 * The percentage is then passed to convertIndia100() to get the final grade.
 * \param input The input grade, expected to be between 0 and the number of marks.
 * \param gradeScale The grade scale name.
 * \param marks The number of marks for this class.
 * \return The US letter grade equivalent.
 */
std::string convertIndiaMarks(std::string input, std::string gradeScale, double marks);

#endif
