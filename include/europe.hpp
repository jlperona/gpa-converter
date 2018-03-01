/**
 * \file europe.hpp This file contains functions for grade scales for countries in Europe.
 */

#ifndef EUROPE_HPP
#define EUROPE_HPP

#include "conversion.hpp"

#include <iostream>
#include <string>

/**
 * Convert the scale in use for Bulgaria.
 * \param input The input grade, expected to be between 2 - 6.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertBulgaria(std::string input, std::string gradeScale);

/**
 * Convert the scale in use for Denmark.
 * \param input The input grade, expected to be between 0 - 13.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertDenmark(std::string input, std::string gradeScale);

/**
 * Convert the European Credit Transfer System scale.
 * \param input The input grade.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertECTS(std::string input, std::string gradeScale);

/**
 * Convert the scale in use for Germany.
 * \param input The input grade, expected to be between 1 - 6.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertGermany(std::string input, std::string gradeScale);

/**
 * Convert the scale in use for the Netherlands.
 * \param input The input grade, expected to be between 0 - 12 or -3.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertNetherlands(std::string input, std::string gradeScale);

/**
 * Convert the scale in use for Sweden.
 * \param input The input grade.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertSweden(std::string input, std::string gradeScale);

/**
 * Convert the scale in use for Switzerland.
 * \param input The input grade, expected to be between 0 - 6.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertSwitzerland(std::string input, std::string gradeScale);

/**
 * Convert the scale in use for the United Kingdom.
 * \param input The input grade, expected to be between 0 - 100.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertUnitedKingdom(std::string input, std::string gradeScale);

#endif
