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
 * Convert the scale in use for Australia.
 * \param input The input grade.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertAustralia(std::string input, std::string gradeScale);

/**
 * Convert the scale in use for Bangladesh.
 * \param input The input grade, expected to be between 0 - 100.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertBangladesh(std::string input, std::string gradeScale);

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
 * Convert the UGC 10 point scale in use for India.
 * \param input The input grade, expected to be between 0 - 10.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertIndia10(std::string input, std::string gradeScale);

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

/**
 * Convert the scale in use for Iran.
 * \param input The input grade, expected to be between 0 - 20.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertIran(std::string input, std::string gradeScale);

/**
 * Convert the scale in use for the Netherlands.
 * \param input The input grade, expected to be between 0 - 12 or -3.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertNetherlands(std::string input, std::string gradeScale);

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
 * Convert the scale in use for Taiwan.
 * \param input The input grade, expected to be between 0 - 100.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertTaiwan(std::string input, std::string gradeScale);

/**
 * Convert the scale in use for the United Kingdom.
 * \param input The input grade, expected to be between 0 - 100.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertUnitedKingdom(std::string input, std::string gradeScale);

/**
 * Convert the scale in use for the United States. Note that since there is a routine to do this already,
 * this function is limited to verification of inputted grades.
 * \param input The input grade, expected to be between 0 - 100.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertUnitedStates(std::string input, std::string gradeScale);

#endif
