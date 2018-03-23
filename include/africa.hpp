/**
 * \file africa.hpp This file contains functions for grade scales for countries in Africa.
 */

#ifndef AFRICA_HPP
#define AFRICA_HPP

#include "conversion.hpp"

#include <iostream>
#include <string>

/**
 * Convert the scale in use for Nigeria.
 * \param input The input grade.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertNigeria(std::string input, std::string gradeScale);

/**
 * Convert the 9 point scale in use for Uganda.
 * \param input The input grade, expected to be between 1 - 9.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertUganda(std::string input, std::string gradeScale);

#endif
