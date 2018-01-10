/**
 * \file asia.hpp This file contains functions for grade scales for countries in Asia, except for India.
 */

#ifndef ASIA_HPP
#define ASIA_HPP

#include "conversion.hpp"

#include <iostream>
#include <string>

/**
 * Convert the scale in use for Bangladesh.
 * \param input The input grade, expected to be between 0 - 100.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertBangladesh(std::string input, std::string gradeScale);

/**
 * Convert the scale in use for China.
 * \param input The input grade, expected to be between 0 - 100.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertChina(std::string input, std::string gradeScale);

/**
 * Convert the scale in use for China.
 * The conversion scale is modified to use the one in place at UC Davis.
 * This scale directly returns the number of grade points and thus returns a double.
 * \param input The input grade, expected to be between 0 - 100.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
double convertChinaModified(std::string input, std::string gradeScale);

/**
 * Convert the scale in use for Iran.
 * \param input The input grade, expected to be between 0 - 20.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertIran(std::string input, std::string gradeScale);

/**
 * Convert the scale in use for the Philippines.
 * \param input The input grade, expected to be between 1 - 5.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertPhilippines(std::string input, std::string gradeScale);

/**
 * Convert the scale in use for Russia.
 * \param input The input grade.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertRussia(std::string input, std::string gradeScale);

/**
 * Convert the scale in use for Saudi Arabia.
 * \param input The input grade.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertSaudiArabia(std::string input, std::string gradeScale);

/**
 * Convert the scale in use for Singapore.
 * \param input The input grade.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertSingapore(std::string input, std::string gradeScale);

/**
 * Convert the scale in use for South Korea.
 * \param input The input grade.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertSouthKorea(std::string input, std::string gradeScale);

/**
 * Convert the scale in use for Taiwan.
 * \param input The input grade, expected to be between 0 - 100.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertTaiwan(std::string input, std::string gradeScale);


#endif