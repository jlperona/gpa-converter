#ifndef COURSE_HPP
#define COURSE_HPP

#include <string>

class Course
{
    private:
        double units;
        std::string givenGrade;
        std::string scaleType;

        std::string letterGrade;
        double letterGradePoints;

        double gradePointSum;

    public:
        Course() = delete;
        Course(double unitsVal, std::string givenGradeVal, std::string scaleTypeVal);
};

#endif