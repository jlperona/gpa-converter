/**
 * \file student.hpp This file contains the Student class definition.
 */

#ifndef STUDENT_HPP
#define STUDENT_HPP

#include "course.hpp"

#include <string>
#include <vector>

/**
 * Represents a student, which is one row on the CSV passed in. A vector of classes
 * contains all their class information, which is used to calculate the student's
 * final GPA.
 */
class Student
{
    private:
        /// The student's identifier.
        std::string idNumber;
        /// A secondary identifier. Useful if a student has two transcripts.
        std::string type;
        /// The type of grading scale that this student's grades are based on.
        std::string scaleType;
        /// Contains all the courses inputted for this student.
        std::vector<Course> courses;
        /// The sum of each class' units multiplied by its grade points on the 4.0 scale. The numerator for the final GPA calculation.
        double gradePointSum;
        /// The sum of the student's units granted from courses. The denominator for the final GPA calculation.
        double unitSum;
        /// The final result, the student's equivalent GPA on the 4.0 scale.
        double finalGpa;

    public:
        Student() = delete;
        /**
         * The only constructor for the Student class. Takes the information from the
         * first three columns of the CSV.
         * \param idNumberVal The student's identifier.
         * \param typeVal A secondary identifier, if a student has multiple transcripts.
         * \param scaleTypeVal The type of grading scale for this transcript.
         */
        Student(std::string idNumberVal, std::string typeVal, std::string scaleTypeVal);
        /**
         * Getter function for the student's identifier.
         * \return The student's identifier.
         */
        std::string getIdNumber() const;
        /**
         * Getter function for the student's secondary identifier.
         * \return The student's secondary identifier.
         */
        std::string getType() const;
        /**
         * Getter function for the student's final GPA.
         * \return The student's final GPA.
         */
        double getFinalGpa() const;
        /**
         * Add a course to the student's Course vector. The scale type is taken from the Student caller.
         * \param units The number of units this course gives.
         * \param grade The grade that the student got, in the original grading scale.
         */
        void addCourse(std::string units, std::string grade);
        /**
         * For each course in the student's Course vector, convert each grade into
         * the 4.0 scale used in the United States.
         */
        void convertClasses();
        /**
         * After all classes have had their grades converted to 4.0 scale,
         * calculate the final GPA for the student.
         */
        void calculateGpa();
};

#endif
