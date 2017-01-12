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
 * Convert the common post-secondary education grading scale in Australia.
 * \param input The input grade.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertAustraliaSecondary(std::string input, std::string gradeScale);
/**
 * Convert the most common scale in Bangladesh, the 100 point scale.
 * \param input The input grade, expected to be between 0 - 100.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertBangladesh(std::string input, std::string gradeScale);
/**
 * Convert the grading scale used in British Columbia, Canada.
 * \param input The input grade, expected to be between 0 - 100.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertCanadaBritishColumbia(std::string input, std::string gradeScale);
/**
 * Convert the grading scale used in Ontario, Canada.
 * \param input The input grade, expected to be between 0 - 100.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertCanadaOntario(std::string input, std::string gradeScale);
/**
 * Convert the most common scale in China, the 100 point scale.
 * \param input The input grade, expected to be between 0 - 100.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertChina(std::string input, std::string gradeScale);
/**
 * Convert the most common scale in China, the 100 point scale.
 * The conversion scale is modified to use the one in place at UC Davis.
 * This scale directly returns the number of grade points and thus returns a double.
 * \param input The input grade, expected to be between 0 - 100.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
double convertChinaModified(std::string input, std::string gradeScale);
/**
 * Convert another Indian scale, the UGC 10 point scale.
 * \param input The input grade, expected to be between 0 - 100.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertIndia10(std::string input, std::string gradeScale);
/**
 * Convert the most common scale in India, the 100 point scale.
 * This function accepts only strings, and passes the converted string to the overloaded double function to convert.
 * \param input The input grade, expected to be a string between 0 - 100.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertIndia100(std::string input, std::string gradeScale);
/**
 * Convert the most common scale in India, the 100 point scale.
 * This function does the conversion, as convertIndiaMarks() also uses the 100 point scale.
 * \param grade The input grade, expected to be between a double between 0 - 100.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertIndia100(double grade, std::string gradeScale);
/**
 * Convert a fairly common scale in India, where the number of marks are the "units," in a sense.
 * The marks given are scaled to out of 100, and then graded as in the India 100 scale.
 * \param input The input grade, expected to be between 0 and the number of marks.
 * \param gradeScale The grade scale name.
 * \param marks The number of marks for this class.
 * \return The US letter grade equivalent.
 */
std::string convertIndiaMarks(std::string input, std::string gradeScale, double marks);
/**
 * Convert the 20 point scale used in Iran.
 * \param input The input grade, expected to be between 0 - 20.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertIran(std::string input, std::string gradeScale);
/**
 * Convert the five point scale used in Saudi Arabia.
 * \param input The input grade.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertSaudiArabia5(std::string input, std::string gradeScale);
/**
 * Convert the most common scale in Singapore.
 * \param input The input grade.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertSingapore(std::string input, std::string gradeScale);
/**
 * Convert the most common scale in South Korea.
 * \param input The input grade.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertSouthKorea(std::string input, std::string gradeScale);
/**
 * Convert the most common scale in Switzerland, the 6 point scale.
 * \param input The input grade, expected to be between 0 - 6.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertSwitzerland6(std::string input, std::string gradeScale);

/**
 * Convert the most common scale in Taiwan, the 100 point scale.
 * \param input The input grade, expected to be between 0 - 100.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertTaiwan(std::string input, std::string gradeScale);
/**
 * Convert the most common scale in the United Kingdom, the 100 point scale.
 * \param input The input grade, expected to be between 0 - 100.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertUnitedKingdom(std::string input, std::string gradeScale);
/**
 * Convert a United States letter grade. Note that since there is a routine to do this already,
 * this function is limited to verification of inputted grades.
 * \param input The input grade, expected to be between 0 - 100.
 * \param gradeScale The grade scale name.
 * \return The US letter grade equivalent.
 */
std::string convertUnitedStates(std::string input, std::string gradeScale);

#endif
