#ifndef COURSE_HPP
#define COURSE_HPP

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

        double gradePointSum;

    public:
        Course() = delete;
        Course(double unitsVal, std::string givenGradeVal, std::string scaleTypeVal);

        void convertToLetter();
};

std::string convertIndia100(std::string input);
std::string convertIndia10(std::string input);
double convertLetterTo4(std::string input);

#endif