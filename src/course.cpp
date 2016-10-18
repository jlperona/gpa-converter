#include "course.hpp"

Course::Course(double unitsVal, std::string givenGradeVal, std::string scaleTypeVal)
    : units(unitsVal), givenGrade(givenGradeVal), scaleType(scaleTypeVal),
      letterGrade(""), letterGradePoints(0), gradePointSum(0)
{

} // Course constructor