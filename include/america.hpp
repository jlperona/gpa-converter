/**
 * \file america.hpp This file contains functions for grade scales for countries in America.
 */

#ifndef AMERICA_HPP
#define AMERICA_HPP

#include "conversion.hpp"

#include <iostream>
#include <string>

/**
 * Convert the double letter grade scale in use for Brazil.
 * \param input The input grade.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertBrazilDouble(std::string input, std::string gradeScale);

/**
 * Convert the scale in use for British Columbia, Canada.
 * \param input The input grade, expected to be between 0 - 100.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertCanadaBritishColumbia(std::string input, std::string gradeScale);

/**
 * Convert the scale in use for Ontario, Canada.
 * \param input The input grade, expected to be between 0 - 100.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertCanadaOntario(std::string input, std::string gradeScale);

/**
 * Convert the scale in use for the United States. Note that since there is a routine to do this already,
 * this function is limited to verification of inputted grades.
 * \param input The input grade.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertUnitedStates(std::string input, std::string gradeScale);

#endif
