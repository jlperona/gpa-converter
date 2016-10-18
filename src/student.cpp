#include "student.hpp"

Student::Student(std::string idNumberVal, std::string typeVal, std::string scaleTypeVal)
    : idNumber(idNumberVal), type(typeVal), scaleType(scaleTypeVal), finalGpa(0)
{
    courses.clear();
} // Student constructor

void Student::addCourse(std::string units, std::string grade)
{
    Course newCourse(std::stod(units), grade, scaleType);
    courses.push_back(newCourse);
} // Student::addCourse()

// use the list of courses to calculate the final GPA
double Student::calculateGpa()
{
    // (TO DO)
    return 0;
} // Student::calculateGpa()