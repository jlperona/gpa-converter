#ifndef COURSE_HPP
#define COURSE_HPP

#include "conversion.hpp"

#include <algorithm>
#include <iostream>
#include <string>

class Course
{
    private:
        double units;
        std::string givenGrade;
        std::string scaleType;

        std::string letterGrade;
        double letterGradePoints;

    public:
        Course() = delete;
        Course(double unitsVal, std::string givenGradeVal, std::string scaleTypeVal);

        double getUnits() const;
        double getGradePoints() const;

        void convertToLetter();
};

double convertLetterTo4(std::string input);

#endif
