/**
 * \file india.cpp This file contains implementation details for grade scales for Indian universities.
 */

#include "india.hpp"

std::string convertIndia10(std::string input, std::string gradeScale)
{
    double grade = -1;

    try // attempt to convert to number
    {
        grade = std::stod(input);
    }
    catch(const std::invalid_argument &e)
    {
        throwInvalidGradeError(input, gradeScale);
    } // invalid grade

    return convertIndia10(grade, gradeScale);
} // convertIndia10(std::string)

std::string convertIndia10(double grade, std::string gradeScale)
{
    if(grade >= 9 && grade <= 10)
    {
        return "A";
    }
    else if(grade >= 8 && grade < 9)
    {
        return "B+";
    }
    else if(grade >= 7 && grade < 8)
    {
        return "B";
    }
    else if(grade >= 6 && grade < 7)
    {
        return "B-";
    }
    else if(grade >= 4 && grade < 6)
    {
        return "C";
    }
    else if(grade >= 0 && grade < 4)
    {
        return "F";
    }
    else // invalid
    {
        throwInvalidGradeError(std::to_string(grade), gradeScale);
    }

    exit(EXIT_FAILURE);
} // convertIndia10(double)

std::string convertIndia10BITS(std::string input, std::string gradeScale)
{
    double grade = -1;

    if(input == "A")
    {
        grade = 10;
    }
    else if(input == "A-")
    {
        grade = 9;
    }
    else if(input == "B")
    {
        grade = 8;
    }
    else if(input == "B-")
    {
        grade = 7;
    }
    else if(input == "C")
    {
        grade = 6;
    }
    else if(input == "C-")
    {
        grade = 5;
    }
    else if(input == "D")
    {
        grade = 4;
    }
    else if(input == "E")
    {
        grade = 2;
    }
    else // invalid
    {
        throwInvalidGradeError(input, gradeScale);
    }

    return convertIndia10(grade, gradeScale);
} // convertIndia10BITS()

std::string convertIndia10VIT(std::string input, std::string gradeScale)
{
    double grade = -1;

    if(input == "S")
    {
        grade = 10;
    }
    else if(input == "A")
    {
        grade = 9;
    }
    else if(input == "B")
    {
        grade = 8;
    }
    else if(input == "C")
    {
        grade = 7;
    }
    else if(input == "D")
    {
        grade = 6;
    }
    else if(input == "E")
    {
        grade = 5;
    }
    else if(input == "F" || input == "N")
    {
        grade = 0;
    }
    else // invalid
    {
        throwInvalidGradeError(input, gradeScale);
    }

    return convertIndia10(grade, gradeScale);
} // convertIndia10VIT()

std::string convertIndia100(std::string input, std::string gradeScale)
{
    double grade = -1;

    try // attempt to convert to number
    {
        grade = std::stod(input);
    }
    catch(const std::invalid_argument &e)
    {
        throwInvalidGradeError(input, gradeScale);
    } // invalid grade

    return convertIndia100(grade, gradeScale);
} // convertIndia100(std::string)

std::string convertIndia100(double grade, std::string gradeScale)
{
    if(grade >= 60 && grade <= 100)
    {
        return "A";
    }
    else if(grade >= 50 && grade < 60)
    {
        return "B";
    }
    else if(grade >= 40 && grade < 50)
    {
        return "C";
    }
    else if(grade >= 0 && grade < 40)
    {
        return "F";
    }
    else // invalid
    {
        throwInvalidGradeError(std::to_string(grade), gradeScale);
    }

    exit(EXIT_FAILURE);
} // convertIndia100(double)

std::string convertIndiaMarks(std::string input, std::string gradeScale, double marks)
{
    double grade = -1;

    try // attempt to convert to number
    {
        grade = std::stod(input);
    }
    catch(const std::invalid_argument &e)
    {
        throwInvalidGradeError(input, gradeScale);
    } // invalid grade

    if(grade < 0 || grade > marks)
    {
        throwInvalidGradeError(input, gradeScale);
    } // out of bounds for this grade

    // scale grade to out of 100
    double scaledGrade = grade * 100 / marks;

    return convertIndia100(scaledGrade, gradeScale);
} // convertIndiaMarks()
