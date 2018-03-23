/**
 * \file america.cpp This file contains implementation details for grade scales for countries in America.
 */

#include "america.hpp"

std::string convertBrazil(std::string input, std::string gradeScale)
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

    if(grade >= 90 && grade <= 100)
    {
        return "A";
    }
    else if(grade >= 70 && grade < 90)
    {
        return "B";
    }
    else if(grade >= 50 && grade < 70)
    {
        return "C";
    }
    else if(grade >= 30 && grade < 50)
    {
        return "D";
    }
    else if(grade >= 0 && grade < 30)
    {
        return "F";
    }
    else // invalid
    {
        throwInvalidGradeError(input, gradeScale);
    }

    exit(EXIT_FAILURE);
} // convertBrazil()

std::string convertBrazilDouble(std::string input, std::string gradeScale)
{
    if(input == "SS")
    {
        return "A";
    }
    else if(input == "MS")
    {
        return "B";
    }
    else if(input == "MM")
    {
        return "C";
    }
    else if(input == "MI" || input == "II")
    {
        return "F";
    }
    else
    {
        throwInvalidGradeError(input, gradeScale);
    }

    exit(EXIT_FAILURE);
} // convertBrazilDouble()

std::string convertCanadaBritishColumbia(std::string input, std::string gradeScale)
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

    if(grade >= 90 && grade <= 100)
    {
        return "A+";
    }
    else if(grade >= 85 && grade < 90)
    {
        return "A";
    }
    else if(grade >= 80 && grade < 85)
    {
        return "A-";
    }
    else if(grade >= 76 && grade < 80)
    {
        return "B+";
    }
    else if(grade >= 72 && grade < 76)
    {
        return "B";
    }
    else if(grade >= 68 && grade < 72)
    {
        return "B-";
    }
    else if(grade >= 64 && grade < 68)
    {
        return "C+";
    }
    else if(grade >= 60 && grade < 64)
    {
        return "C";
    }
    else if(grade >= 55 && grade < 60)
    {
        return "C-";
    }
    else if(grade >= 50 && grade < 55)
    {
        return "D";
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
} // convertCanadaBritishColumbia()

std::string convertCanadaOntario(std::string input, std::string gradeScale)
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

    if(grade >= 90 && grade <= 100)
    {
        return "A+";
    }
    else if(grade >= 80 && grade < 90)
    {
        return "A";
    }
    else if(grade >= 70 && grade < 80)
    {
        return "B";
    }
    else if(grade >= 60 && grade < 70)
    {
        return "C";
    }
    else if(grade >= 50 && grade < 60)
    {
        return "D";
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
} // convertCanadaOntario()

std::string convertPeru(std::string input, std::string gradeScale)
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

    if(grade >= 14 && grade <= 20)
    {
        return "A";
    }
    else if(grade >= 12 && grade < 14)
    {
        return "B";
    }
    else if(grade >= 11 && grade < 12)
    {
        return "C";
    }
    else if(grade >= 10 && grade < 11)
    {
        return "D";
    }
    else if(grade >= 0 && grade < 11)
    {
        return "F";
    }
    else // invalid
    {
        throwInvalidGradeError(input, gradeScale);
    }

    exit(EXIT_FAILURE);
} // convertPeru()

std::string convertUnitedStates(std::string input, std::string gradeScale)
{
    // length of input should only be one or two, example "A" or "A-"
    if(!(input.length() == 1 || input.length() == 2))
    {
        throwInvalidGradeError(input, gradeScale);
    }

    if(!(input[0] == 'A' || input[0] == 'B' || input[0] == 'C' || input[0] == 'D'|| input[0] == 'F'))
    {
        throwInvalidGradeError(input, gradeScale);
    } // first letter unexpected

    if(input.length() == 2)
    {
        if(!(input[1] == '+' || input[1] == '-'))
        {
            throwInvalidGradeError(input, gradeScale);
        }
    } // plus or minus sign

    return input;
} // convertUnitedStates()
