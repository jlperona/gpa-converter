/**
 * \file europe.hpp This file contains functions for grade scales for countries in Europe.
 */

#ifndef EUROPE_HPP
#define EUROPE_HPP

#include "conversion.hpp"

#include <iostream>
#include <string>

/**
 * Convert the scale in use for Austria.
 * \param input The input grade, expected to be between 1 - 5.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertAustria(std::string input, std::string gradeScale);

/**
 * Convert the scale in use for Belgium.
 * \param input The input grade, expected to be between 0 - 20.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertBelgium(std::string input, std::string gradeScale);

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
 * Convert the scale in use for France.
 * \param input The input grade, expected to be between 0 - 20.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertFrance(std::string input, std::string gradeScale);

/**
 * Convert the scale in use for Germany.
 * \param input The input grade, expected to be between 1 - 6.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertGermany(std::string input, std::string gradeScale);

/**
 * Convert the scale in use for Greece.
 * \param input The input grade, expected to be between 0 - 10.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertGreece(std::string input, std::string gradeScale);

/**
 * Convert the scale in use for Ireland.
 * \param input The input grade, expected to be between 0 - 100.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertIreland(std::string input, std::string gradeScale);

/**
 * Convert the scale in use for Italy.
 * \param input The input grade, expected to be between 0 - 30.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertItaly(std::string input, std::string gradeScale);

/**
 * Convert the scale in use for the Netherlands.
 * \param input The input grade, expected to be between 0 - 12 or -3.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertNetherlands(std::string input, std::string gradeScale);

/**
 * Convert the most common scale in Romania.
 * \param input The input grade, expected to be between 0 - 10.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertRomania(std::string input, std::string gradeScale);


/**
 * Convert the most common scale in Spain.
 * \param input The input grade, expected to be between 0 - 10.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertSpain(std::string input, std::string gradeScale);

/**
 * Convert the most common scale in Sweden.
 * \param input The input grade.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertSweden(std::string input, std::string gradeScale);

/**
 * Convert the five point scale in Sweden.
 * \param input The input grade, expected to be between 1 - 5.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertSweden5(std::string input, std::string gradeScale);

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

/**
 * Convert the scale in use for the University of Glasgow in Scotland.
 * They don't appear to follow the typical Scottish grade scale.
 * \param input The input grade.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertUniversityOfGlasgow(std::string input, std::string gradeScale);

#endif
