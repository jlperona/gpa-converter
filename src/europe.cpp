/**
 * \file europe.cpp This file contains implementation details for grade scales for countries in Europe.
 */

#include "europe.hpp"

std::string convertBulgaria(std::string input, std::string gradeScale)
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

    if(grade >= 5 && grade <= 6)
    {
        return "A";
    }
    else if(grade >= 4 && grade < 5)
    {
        return "B";
    }
    else if(grade >= 3 && grade < 4)
    {
        return "C";
    }
    else if(grade >= 2 && grade < 3)
    {
        return "F";
    }
    else // invalid
    {
        throwInvalidGradeError(input, gradeScale);
    }

    exit(EXIT_FAILURE);
} // convertBulgaria()

std::string convertDenmark(std::string input, std::string gradeScale)
{
    // differs from normal because -3 is an allowable grade
    double grade = -4;

    try // attempt to convert to number
    {
        grade = std::stod(input);
    }
    catch(const std::invalid_argument &e)
    {
        throwInvalidGradeError(input, gradeScale);
    } // invalid grade

    if(grade == 12)
    {
        return "A+";
    }
    else if(grade >= 10 && grade < 12)
    {
        return "A";
    }
    else if(grade >= 7 && grade < 10)
    {
        return "B";
    }
    else if(grade >= 4 && grade < 7)
    {
        return "C";
    }
    else if(grade >= 2 && grade < 4)
    {
        return "D";
    }
    else if(grade >= 0 && grade < 2)
    {
        return "F";
    }
    else if(grade == -3)
    {
        return "F";
    }
    else // invalid
    {
        throwInvalidGradeError(input, gradeScale);
    }

    exit(EXIT_FAILURE);
} // convertDenmark()

std::string convertECTS(std::string input, std::string gradeScale)
{
    if(input == "A")
    {
        return "A";
    }
    else if(input == "B")
    {
        return "B+";
    }
    else if(input == "C")
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
    else if(input == "FX" || input == "F")
    {
        return "F";
    }
    else // invalid
    {
        throwInvalidGradeError(input, gradeScale);
    }

    exit(EXIT_FAILURE);
} // convertECTS()

std::string convertGermany(std::string input, std::string gradeScale)
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

    if(grade > 4 && grade <= 6)
    {
        return "F";
    }
    else if(grade > 3.5 && grade <= 4)
    {
        return "C";
    }
    else if(grade > 2.5 && grade <= 3.5)
    {
        return "B";
    }
    else if(grade >= 1 && grade <= 2.5)
    {
        return "A";
    }
    else // invalid
    {
        throwInvalidGradeError(input, gradeScale);
    }

    exit(EXIT_FAILURE);
} // convertGermany()

std::string convertGreece(std::string input, std::string gradeScale)
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

    if(grade >= 8.5 && grade <= 10)
    {
        return "A";
    }
    else if(grade >= 6.5 && grade < 8.5)
    {
        return "B";
    }
    else if(grade >= 5 && grade < 6.5)
    {
        return "C";
    }
    else if(grade >= 0 && grade < 5)
    {
        return "F";
    }
    else // invalid
    {
        throwInvalidGradeError(input, gradeScale);
    }

    exit(EXIT_FAILURE);
} // convertGreece()

std::string convertNetherlands(std::string input, std::string gradeScale)
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

    if(grade >= 8.5 && grade <= 10)
    {
        return "A+";
    }
    else if(grade >= 7.5 && grade < 8.5)
    {
        return "A";
    }
    else if(grade >= 6.5 && grade < 7.5)
    {
        return "B";
    }
    else if(grade >= 6 && grade < 6.5)
    {
        return "C";
    }
    else if(grade >= 5.5 && grade < 6)
    {
        return "D";
    }
    else if(grade >= 1 && grade < 5.5)
    {
        return "F";
    }
    else // invalid
    {
        throwInvalidGradeError(input, gradeScale);
    }

    exit(EXIT_FAILURE);
} // convertNetherlands()

std::string convertSpain(std::string input, std::string gradeScale)
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

    if(grade == 10)
    {
        return "A+";
    }
    else if(grade >= 9 && grade < 10)
    {
        return "A";
    }
    else if(grade >= 7 && grade < 9)
    {
        return "B+";
    }
    else if(grade >= 6 && grade < 7)
    {
        return "B";
    }
    else if(grade >= 5.5 && grade < 6)
    {
        return "B-";
    }
    else if(grade >= 5 && grade < 5.5)
    {
        return "C";
    }
    else if(grade >= 0 && grade < 5)
    {
        return "F";
    }
    else // invalid
    {
        throwInvalidGradeError(input, gradeScale);
    }

    exit(EXIT_FAILURE);
} // convertSpain()

std::string convertSweden(std::string input, std::string gradeScale)
{
    if(input == "VG")
    {
        return "A";
    }
    else if(input == "G")
    {
        return "B";
    }
    else if(input == "U")
    {
        return "F";
    }
    else // invalid
    {
        throwInvalidGradeError(input, gradeScale);
    }

    exit(EXIT_FAILURE);
} // convertSweden()

std::string convertSweden5(std::string input, std::string gradeScale)
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

    if(grade == 5)
    {
        return "A";
    }
    else if(grade >= 4 && grade < 5)
    {
        return "A-";
    }
    else if(grade >= 3 && grade < 4)
    {
        return "B";
    }
    else if(grade >= 1 && grade < 3)
    {
        return "F";
    }
    else // invalid
    {
        throwInvalidGradeError(input, gradeScale);
    }

    exit(EXIT_FAILURE);
} // convertSweden5()

std::string convertSwitzerland(std::string input, std::string gradeScale)
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
} // convertSwitzerland()

std::string convertUnitedKingdom(std::string input, std::string gradeScale)
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

    if(grade >= 70 && grade <= 100)
    {
        return "A";
    }
    else if(grade >= 65 && grade < 70)
    {
        return "A-";
    }
    else if(grade >= 60 && grade < 65)
    {
        return "B+";
    }
    else if(grade >= 50 && grade < 60)
    {
        return "B";
    }
    else if(grade >= 45 && grade < 50)
    {
        return "C+";
    }
    else if(grade >= 40 && grade < 45)
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
} // convertUnitedKingdom()
