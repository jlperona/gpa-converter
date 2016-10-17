#include "course.hpp"

Course::Course(unsigned idVal, double unitsVal, std::string givenGradeVal, std::string scaleTypeVal)
    : id(idVal), units(unitsVal), givenGrade(givenGradeVal), scaleType(scaleTypeVal),
      letterGrade(""), letterGradePoints(0), gradePointSum(0)
{

} // Course constructor