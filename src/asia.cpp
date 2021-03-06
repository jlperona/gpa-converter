/**
 * \file asia.cpp This file contains implementation details for grade scales for countries in Asia, except for India.
 */

#include "asia.hpp"

std::string convertBangladesh(std::string input, std::string gradeScale)
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

    if(grade >= 60 && grade <= 100)
    {
        return "A";
    }
    else if(grade >= 55 && grade < 60)
    {
        return "B+";
    }
    else if(grade >= 50 && grade < 55)
    {
        return "B";
    }
    else if(grade >= 43 && grade < 50)
    {
        return "C+";
    }
    else if(grade >= 35 && grade < 43)
    {
        return "C";
    }
    else if(grade >= 0 && grade < 35)
    {
        return "F";
    }
    else // invalid
    {
        throwInvalidGradeError(input, gradeScale);
    }

    exit(EXIT_FAILURE);
} // convertBangladesh()

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

double convertChinaModified(std::string input, std::string gradeScale)
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

    if(grade >= 91 && grade <= 100)
    {
        return 4.0;
    }
    else if(grade >= 0 && grade <= 51)
    {
        return 0.0;
    } // handle easy cases first
    else if(grade < 0 || grade > 100)
    {
        throwInvalidGradeError(input, gradeScale);
    } // invalid

    // truncate to do easy math
    unsigned truncatedGrade = grade;
    double finalGrade = (truncatedGrade / 10.0) - 5.1;

    return finalGrade;
} // convertChinaModified()

std::string convertIran(std::string input, std::string gradeScale)
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

    if(grade >= 18 && grade <= 20)
    {
        return "A+";
    }
    else if(grade >= 16 && grade < 18)
    {
        return "A";
    }
    else if(grade >= 14 && grade < 16)
    {
        return "B";
    }
    else if(grade >= 12 && grade < 14)
    {
        return "C";
    }
    else if(grade >= 10 && grade < 12)
    {
        return "D";
    }
    else if(grade >= 0 && grade < 10)
    {
        return "F";
    }
    else // invalid
    {
        throwInvalidGradeError(input, gradeScale);
    }

    exit(EXIT_FAILURE);
} // convertIran()

std::string convertJapan(std::string input, std::string gradeScale)
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
    else if(grade >= 0 && grade < 60)
    {
        return "F";
    }
    else // invalid
    {
        throwInvalidGradeError(input, gradeScale);
    }

    exit(EXIT_FAILURE);
} // convertJapan()

std::string convertNepal(std::string input, std::string gradeScale)
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

    return convertNepal(grade, gradeScale);
} // convertNepal(std::string)

std::string convertNepal(double grade, std::string gradeScale)
{
    if(grade >= 60 && grade <= 100)
    {
        return "A";
    }
    else if(grade >= 46 && grade < 60)
    {
        return "B";
    }
    else if(grade >= 32 && grade < 46)
    {
        return "C";
    }
    else if(grade >= 0 && grade < 32)
    {
        return "F";
    }
    else // invalid
    {
        throwInvalidGradeError(std::to_string(grade), gradeScale);
    }

    exit(EXIT_FAILURE);
} // convertNepal(double)

std::string convertNepalMarks(std::string input, std::string gradeScale, double marks)
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

    return convertNepal(scaledGrade, gradeScale);
} // convertNepalMarks()

std::string convertPhilippines(std::string input, std::string gradeScale)
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

    if(grade >= 1 && grade < 1.25)
    {
        return "A+";
    }
    else if(grade >= 1.25 && grade < 1.5)
    {
        return "A";
    }
    else if(grade >= 1.5 && grade < 1.75)
    {
        return "A-";
    }
    else if(grade >= 1.75 && grade < 2)
    {
        return "B+";
    }
    else if(grade >= 2 && grade < 2.25)
    {
        return "B";
    }
    else if(grade >= 2.25 && grade < 2.5)
    {
        return "B-";
    }
    else if(grade >= 2.5 && grade < 2.75)
    {
        return "C+";
    }
    else if(grade >= 2.75 && grade < 3)
    {
        return "C";
    }
    else if(grade >= 3 && grade < 4)
    {
        return "C-";
    }
    else if(grade >= 4 && grade < 5)
    {
        return "D";
    }
    else if(grade == 5)
    {
        return "F";
    }
    else // invalid
    {
        throwInvalidGradeError(input, gradeScale);
    }

    exit(EXIT_FAILURE);
} // convertPhilippines()

std::string convertRussia(std::string input, std::string gradeScale)
{
    if(input == "Excellent" || input == "E")
    {
        return "A";
    }
    else if(input == "Good" || input == "G")
    {
        return "B";
    }
    else if(input == "Satisfactory" || input == "S")
    {
        return "C";
    }
    else if(input == "Unsatisfactory" || input == "U")
    {
        return "F";
    }
    else // invalid
    {
        throwInvalidGradeError(input, gradeScale);
    }

    exit(EXIT_FAILURE);
} // convertRussia()

std::string convertSaudiArabia(std::string input, std::string gradeScale)
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
    else if(input == "F" || input == "DN")
    {
        return "F";
    }
    else // invalid
    {
        throwInvalidGradeError(input, gradeScale);
    }

    exit(EXIT_FAILURE);
} // convertSaudiArabia()

std::string convertSingapore(std::string input, std::string gradeScale)
{
    if(input == "A+" || input == "AD")
    {
        return "A+";
    }
    else if(input == "A")
    {
        return "A";
    }
    else if(input == "A-")
    {
        return "A-";
    }
    else if(input == "B+")
    {
        return "B+";
    }
    else if(input == "B")
    {
        return "B";
    }
    /* While Scholaro doesn't have this grade listed on their website,
     * National University of Singapore uses it. */
    else if(input == "B-")
    {
        return "B-";
    }
    else if(input == "C+")
    {
        return "C+";
    }
    else if(input == "C")
    {
        return "C";
    }
    /* While Scholaro doesn't have this grade listed on their website,
     * National University of Singapore uses it. */
    else if(input == "C-")
    {
        return "C-";
    }
    else if(input == "D+")
    {
        return "C-";
    }
    else if(input == "D")
    {
        return "D";
    }
    /* While Scholaro doesn't have this grade listed on their website,
     * National University of Singapore uses it. */
    else if(input == "D-")
    {
        return "D-";
    }
    else if(input == "F")
    {
        return "F";
    }
    else // invalid
    {
        throwInvalidGradeError(input, gradeScale);
    }

    exit(EXIT_FAILURE);
} // convertSingapore()

std::string convertSouthKorea(std::string input, std::string gradeScale)
{
    if(input == "A+")
    {
        return "A+";
    }
    else if(input == "A" || input == "A0" || input == "AO")
    {
        return "A";
    }
    else if(input == "A-")
    {
        return "A-";
    }
    else if(input == "B+")
    {
        return "B+";
    }
    else if(input == "B" || input == "B0" || input == "BO")
    {
        return "B";
    }
    else if(input == "B-")
    {
        return "B-";
    }
    else if(input == "C+")
    {
        return "C+";
    }
    else if(input == "C" || input == "C0" || input == "CO")
    {
        return "C";
    }
    else if(input == "C-")
    {
        return "C-";
    }
    else if(input == "D+")
    {
        return "D+";
    }
    else if(input == "D" || input == "D0" || input == "DO")
    {
        return "D";
    }
    else if(input == "D-")
    {
        return "D-";
    }
    else if(input == "F")
    {
        return "F";
    }
    else // invalid
    {
        throwInvalidGradeError(input, gradeScale);
    }

    exit(EXIT_FAILURE);
} // convertSouthKorea()

std::string convertTaiwan(std::string input, std::string gradeScale)
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
    else if(grade >= 0 && grade < 60)
    {
        return "F";
    }
    else // invalid
    {
        throwInvalidGradeError(input, gradeScale);
    }

    exit(EXIT_FAILURE);
} // convertTaiwan()

std::string convertVietnam(std::string input, std::string gradeScale)
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
        return "A+";
    }
    else if(grade >= 8 && grade < 9)
    {
        return "A";
    }
    else if(grade >= 7 && grade < 8)
    {
        return "B+";
    }
    else if(grade >= 6 && grade < 7)
    {
        return "B";
    }
    else if(grade >= 5 && grade < 6)
    {
        return "C";
    }
    else if(grade >= 0 && grade < 5)
    {
        /* Note that there's a carve-out for a D here, but exactly when this applies is unclear.
         * Scholaro says "with an overall average grade of at least 5.0."
         * How this applies to one course isn't exactly clear, so assigning it to an F is safer. */
        return "F";
    }
    else // invalid
    {
        throwInvalidGradeError(input, gradeScale);
    }

    exit(EXIT_FAILURE);
} // convertVietnam()
