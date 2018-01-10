/**
 * \file oceania.cpp This file contains implementation details for grade scales for countries in Oceania.
 */

#include "oceania.hpp"

std::string convertAustralia(std::string input, std::string gradeScale)
{
    if(input == "HD")
    {
        return "A+";
    }
    else if(input == "D")
    {
        return "A";
    }
    else if(input == "CR" || input == "Cr")
    {
        return "B";
    }
    else if(input == "P")
    {
        return "C";
    }
    else if(input == "PC")
    {
        return "D";
    }
    else if(input == "N")
    {
        return "F";
    }
    else // invalid
    {
        throwInvalidGradeError(input, gradeScale);
    }

    exit(EXIT_FAILURE);
} // convertAustralia()
