/**
 * \file africa.cpp This file contains implementation details for grade scales for countries in Africa.
 */

#include "africa.hpp"

std::string convertUganda(std::string input, std::string gradeScale)
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

    if(grade >= 1 && grade < 3)
    {
        return "A";
    }
    else if(grade >= 3 && grade < 7)
    {
        return "B";
    }
    else if(grade >= 7 && grade < 9)
    {
        return "C";
    }
    else if(grade == 9)
    {
        return "F";
    }
    else // invalid
    {
        throwInvalidGradeError(input, gradeScale);
    }

    exit(EXIT_FAILURE);
} // convertUganda()
