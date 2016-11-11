/**
 * \file conversion.cpp This file contains implementation details for the conversion functions.
 */

#include "conversion.hpp"

void throwInvalidGradeError(std::string input, std::string gradeScale)
{
    std::cerr << "ERROR: Invalid grade '" << input << "' in student using grade scale '"
              << gradeScale << "'." << std::endl;
    exit(EXIT_FAILURE);
} // throwInvalidGradeError()

std::string convertChina(std::string input, std::string gradeScale)
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
    else if(grade >= 80 && grade < 90)
    {
        return "B";
    }
    else if(grade >= 70 && grade < 80)
    {
        return "C";
    }
    else if(grade >= 60 && grade < 70)
    {
        return "D";
    }
    else if(grade >= 0 && grade < 60)
    {
        return "F";
    }
    else // invalid
    {
        throwInvalidGradeError(input, gradeScale);
    }

    exit(EXIT_FAILURE);
} // convertChina()

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
        throwInvalidGradeError(input, gradeScale);
    }

    exit(EXIT_FAILURE);
} // convertIndia10()

std::string convertIndia100(std::string input, std::string gradeScale)
{
    if(input == "G")
    {
        return "D";
    } // handle non-number first

    double grade = -1;

    try // attempt to convert to number
    {
        grade = std::stod(input);
    }
    catch(const std::invalid_argument &e)
    {
        throwInvalidGradeError(input, gradeScale);
    } // invalid grade

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
        throwInvalidGradeError(input, gradeScale);
    }

    exit(EXIT_FAILURE);
} // convertIndia100()

std::string convertSaudiArabia5(std::string input, std::string gradeScale)
{
    if(input == "A+")
    {
        return "A+";
    }
    else if(input == "A")
    {
        return "A";
    }
    else if(input == "B+")
    {
        return "A-";
    }
    else if(input == "B")
    {
        return "B+";
    }
    else if(input == "C+")
    {
        return "B";
    }
    else if(input == "C")
    {
        return "B-";
    }
    else if(input == "D+")
    {
        return "C+";
    }
    else if(input == "D")
    {
        return "C";
    }
    else if(input == "FN")
    {
        return "F";
    }
    else if(input == "DN")
    {
        return "F";
    }
    else
    {
        throwInvalidGradeError(input, gradeScale);
    }

    exit(EXIT_FAILURE);
} // convertSaudiArabia5()

std::string convertSwitzerland6(std::string input, std::string gradeScale)
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

    if(grade == 6)
    {
        return "A";
    }
    else if(grade >= 5.5 && grade < 6)
    {
        return "A-";
    }
    else if(grade >= 5 && grade < 5.5)
    {
        return "B+";
    }
    else if(grade >= 4.5 && grade < 5)
    {
        return "B";
    }
    else if(grade >= 4 && grade < 4.5)
    {
        return "C";
    }
    else if(grade >= 0 && grade < 4)
    {
        return "F";
    }
    else // invalid
    {
        throwInvalidGradeError(input, gradeScale);
    }

    exit(EXIT_FAILURE);
} // convertSwitzerland6()

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
