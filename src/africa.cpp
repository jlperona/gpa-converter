/**
 * \file africa.cpp This file contains implementation details for grade scales for countries in Africa.
 */

#include "africa.hpp"

std::string convertNigeria(std::string input, std::string gradeScale)
{
    if(input == "A" || input == "AB")
    {
        return "A";
    }
    else if(input == "B" || input == "BC")
    {
        return "B+";
    }
    else if(input == "C" || input == "CD")
    {
        return "B";
    }
    else if(input == "D")
    {
        return "C+";
    }
    else if(input == "E")
    {
        return "C";
    }
    else if(input == "F")
    {
        return "F";
    }
    else
    {
        throwInvalidGradeError(input, gradeScale);
    }

    exit(EXIT_FAILURE);
} // convertNigeria()

std::string convertSouthAfrica(std::string input, std::string gradeScale)
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

    if(grade >= 75 && grade <= 100)
    {
        return "A";
    }
    else if(grade >= 70 && grade < 75)
    {
        return "B+";
    }
    else if(grade >= 60 && grade < 70)
    {
        return "B";
    }
    else if(grade >= 50 && grade < 60)
    {
        return "C";
    }
    else if(grade >= 0 && grade < 50)
    {
        return "F";
    }
    else // invalid
    {
        throwInvalidGradeError(input, gradeScale);
    }

    exit(EXIT_FAILURE);
} // convertSouthAfrica()

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
