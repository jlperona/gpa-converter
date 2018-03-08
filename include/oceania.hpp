/**
 * \file oceania.hpp This file contains functions for grade scales for countries in Oceania.
 */

#ifndef OCEANIA_HPP
#define OCEANIA_HPP

#include "conversion.hpp"

#include <iostream>
#include <string>

/**
 * Convert the scale in use for Australia.
 * \param input The input grade.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertAustralia(std::string input, std::string gradeScale);

#endif
