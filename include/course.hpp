/**
 * \file course.hpp This file contains the Course class definition, and
 * the routine to convert letter grades to their 4-point scale equivalent.
 */

#ifndef COURSE_HPP
#define COURSE_HPP

#include "africa.hpp"
#include "america.hpp"
#include "asia.hpp"
#include "conversion.hpp"
#include "europe.hpp"
#include "india.hpp"
#include "oceania.hpp"

#include <algorithm>
#include <iostream>
#include <string>

/**
 * Represents a course. The scale type defines the conversion from
 * input grade to output.
 */
class Course
{
    private:
        /// Units are consistent regardless of the grading scale.
        double units;
        /// The grade input that needs to be converted.
        std::string givenGrade;
        /// The grading scale that is used for this course.
        std::string scaleType;
        /// The equivalent US letter grade.
        std::string letterGrade;
        /// The equivalent of the letter grade in 4.0 scale terms.
        double letterGradePoints;

    public:
        Course() = delete;
        /**
         * The only Course constructor. Takes the given course information from the CSV,
         * and the scale type from the Student itself.
         * \param unitsVal The units for the course.
         * \param givenGradeVal The grade for the course in the grade scale specified.
         * \param scaleTypeVal The scale type for this course, taken from the Student.
         */
        Course(double unitsVal, std::string givenGradeVal, std::string scaleTypeVal);
        /**
         * Getter function for the units that this class is worth.
         * \return The number of units for this class.
         */
        double getUnits() const;
        /**
         * Getter function for the 4.0 scale grade points.
         * \return The grade points for this class on the 4.0 grade scale.
         */
        double getGradePoints() const;
        /**
         * Take the grade from the given grade scale and convert it to US letter grade terms.
         */
        void convertToLetter();
};

/**
 * Convert a letter grade into its 4.0 scale equivalent. This scale is well known.
 * \param input The letter grade to be converted.
 * \return The equivalent number in the 4.0 scale.
 */
double convertLetterTo4(std::string input);

#endif
