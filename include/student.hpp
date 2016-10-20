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

        // used to calculate final gpa below
        double gradePointSum; // numerator
        double unitSum; // denominator

        // calculated using courses
        double finalGpa;

    public:
        Student() = delete;
        Student(std::string idNumberVal, std::string typeVal, std::string scaleTypeVal);

        std::string getIdNumber() const;
        std::string getType() const;
        double getFinalGpa() const;

        void addCourse(std::string units, std::string grade);
        void convertClasses();
        void calculateGpa();
};

#endif
