#ifndef STUDENT_HPP
#define STUDENT_HPP

#include "course.hpp"

#include <string>
#include <vector>

class Student
{
    private:
        // following are taken straight from the CSV
        std::string idNumber;
        std::string type;
        std::string scaleType;
        
        // filled from the CSV
        std::vector<Course> courses;

        // calculated using courses
        double finalGpa;

    public:
        Student() = delete;
        Student(std::string idNumberVal, std::string typeVal, std::string scaleTypeVal);

        void addCourse();

        double calculateGpa();
};

#endif