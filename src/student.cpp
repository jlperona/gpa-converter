#include "student.hpp"

Student::Student(std::string idNumberVal, std::string typeVal, std::string scaleTypeVal)
    : idNumber(idNumberVal), type(typeVal), scaleType(scaleTypeVal), finalGpa(0)
{
    courses.clear();
} // Student constructor

void Student::addCourse()
{

} // Student::addCourse()

// use the list of courses to calculate the final GPA
double Student::calculateGpa()
{
    return 0;
} // Student::calculateGpa()