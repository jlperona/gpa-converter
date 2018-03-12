/**
 * \file oceania.cpp This file contains implementation details for grade scales for countries in Oceania.
 */

#include "oceania.hpp"

std::string convertAustralia(std::string input, std::string gradeScale)
{
    /* Some of these grades are not in ForeignCredits' database.
     * They were taken from transcripts by the University of New South Wales. */
    if(input == "HD")
    {
        return "A+";
    }
    else if(input == "D" || input == "DN")
    {
        return "A";
    }
    else if(input == "CR")
    {
        return "B";
    }
    else if(input == "P" || input == "PS")
    {
        return "C";
    }
    else if(input == "PC")
    {
        return "D";
    }
    else if(input == "N" || input == "F" || input == "FL")
    {
        return "F";
    }
    else // invalid
    {
        throwInvalidGradeError(input, gradeScale);
    }

    exit(EXIT_FAILURE);
} // convertAustralia()

std::string convertAustraliaNewSouthWales(std::string input, std::string gradeScale)
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

    if(grade >= 85 && grade <= 100)
    {
        return "A+";
    }
    else if(grade >= 75 && grade < 85)
    {
        return "A";
    }
    else if(grade >= 65 && grade < 75)
    {
        return "B";
    }
    else if(grade >= 50 && grade < 65)
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
} // convertAustraliaNewSouthWales()
