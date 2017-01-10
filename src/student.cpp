/**
 * \file student.cpp This file contains implementation details for the Student class.
 */

#include "student.hpp"

Student::Student(std::string idNumberVal, std::string typeVal, std::string scaleTypeVal)
    : idNumber(idNumberVal), type(typeVal), scaleType(scaleTypeVal)
{
    courses.clear();
} // Student constructor

std::string Student::getIdNumber() const
{
    return idNumber;
} // Student::getIdNumber()

std::string Student::getType() const
{
    return type;
} // Student::getType()

double Student::getFinalGpa() const
{
    return finalGpa;
} // Student::getFinalGpa()

double Student::getUnitSum() const
{
    return unitSum;
} // Student::getUnitSum()

void Student::addCourse(std::string units, std::string grade)
{
    double convertedUnits = 0;

    try // attempt to convert
    {
        convertedUnits = std::stod(units);
    }
    catch(const std::invalid_argument &e)
    {
        std::cerr << "ERROR: Invalid unit count '" << units << "' for student ID '" << idNumber << "'." << std::endl;
        exit(EXIT_FAILURE);
    } // invalid

    Course newCourse(convertedUnits, grade, scaleType);
    courses.push_back(newCourse);
} // Student::addCourse()

void Student::convertClasses()
{
    for(auto &iterator : courses)
    {
        iterator.convertToLetter();
    }
} // Student::convertClasses()

void Student::calculateGpa()
{
    /* GPA Formula (c = class)
     * numerator = c1 units * c1 grade points + c2 units * c2 grade points + ...
     * denominator = c1 units + c2 units + ...
     * final GPA = numerator / denominator
     */

    gradePointSum = 0;
    unitSum = 0;

    for(auto const &iterator : courses)
    {
        gradePointSum += iterator.getGradePoints() * iterator.getUnits();
        unitSum += iterator.getUnits();
    }

    finalGpa = gradePointSum / unitSum;
} // Student::calculateGpa()
