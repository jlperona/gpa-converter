#include "student.hpp"

Student::Student(std::string idNumberVal, std::string typeVal, std::string scaleTypeVal)
    : idNumber(idNumberVal), type(typeVal), scaleType(scaleTypeVal),
      gradePointSum(0), unitSum(0), finalGpa(0)
{
    courses.clear();
} // Student constructor

std::string Student::getIdNumber()
{
    return idNumber;
} // Student::getIdNumber()

std::string Student::getType()
{
    return type;
} // Student::getType()

double Student::getFinalGpa()
{
    return finalGpa;
} // Student::getFinalGpa()

void Student::addCourse(std::string units, std::string grade)
{
    double convertedUnits = 0;
    try // attempt to convert
    {
        convertedUnits = std::stod(units);
    }
    catch(const std::invalid_argument &e)
    {
        std::cerr << "Invalid unit count '" << units << "' for student ID '" << idNumber << "'." << std::endl
                  << "Check your data." << std::endl;
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

// use the list of courses to calculate the final GPA
void Student::calculateGpa()
{
    /* GPA formula, where c = class
     * numerator = c1 units * c1 grade points + c2 units * c2 grade points + ...
     * denominator = c1 units + c2 units + ...
     * final GPA = numerator / denominator */

    gradePointSum = 0;
    unitSum = 0;
    finalGpa = 0;

    for(auto iterator : courses)
    {
        gradePointSum += iterator.getGradePoints() * iterator.getUnits();
        unitSum += iterator.getUnits();
    }

    finalGpa = gradePointSum / unitSum;
} // Student::calculateGpa()
