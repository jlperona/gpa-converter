#include "course.hpp"

Course::Course(double unitsVal, std::string givenGradeVal, std::string scaleTypeVal)
    : units(unitsVal), givenGrade(givenGradeVal), scaleType(scaleTypeVal),
      letterGrade(""), letterGradePoints(0), gradePointSum(0)
{

} // Course constructor

void Course::convertToLetter()
{
    if(scaleType == "India 100")
    {
        letterGrade = convertIndia100(givenGrade);
    }
    else if(scaleType == "India 10")
    {
        letterGrade = convertIndia10(givenGrade);
    }
    else
    {
        std::cout << "Unknown grade type scale " << scaleType << "." << std::endl
                  << "Check your data." << std::endl;
        exit(EXIT_FAILURE);
    }

    letterGradePoints = convertLetterTo4(letterGrade);
} // Course::convertToLetter()

/* All information for non-US grade conversion is taken from the following website:
 * foreigncredits.com/resources/grade-conversion
 * The US letter to number scale is widely known. */

std::string convertIndia100(std::string input)
{
    if(input == "G")
    {
        return "D";
    }

    double grade = -1;

    try // attempt to convert this set
    {
        grade = std::stod(input);
    }
    catch(const std::invalid_argument &e)
    {
        std::cout << "Invalid grade '" << input << "' passed to India 100." << std::endl
                  << "Check your data." << std::endl;
        exit(EXIT_FAILURE);
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
        std::cout << "Invalid grade '" << input << "' passed to India 100." << std::endl
                  << "Check your data." << std::endl;
        exit(EXIT_FAILURE);       
    }
} // convertIndia100()

std::string convertIndia10(std::string input)
{
   try // attempt to convert this set
    {
        double grade = std::stod(input);
    }
    catch(const std::invalid_argument &e)
    {
        std::cout << "Invalid grade '" << input << "' passed to India 10." << std::endl
                  << "Check your data." << std::endl;
        exit(EXIT_FAILURE);
    } // invalid grade
    return "";
} // convertIndia10()

double convertLetterTo4(std::string input)
{
    double currentPoints = 0;

    // handle letter grades first
    if(input[0] == 'A')
    {
        currentPoints = 4;
    }
    else if(input[0] == 'B')
    {
        currentPoints = 3;
    }
    else if(input[0] == 'C')
    {
        currentPoints = 2;
    }
    else if(input[0] == 'D')
    {
        currentPoints = 1;
    }
    else if(input[0] == 'F')
    {
        return 0;
    } // no qualifiers for an F
    else // unexpected symbol
    {
        std::cout << "Unexpected symbol '" << input[0] << "' in letter grade." << std::endl;
        exit(EXIT_FAILURE);
    }

    if(input.length() == 1)
    {
        return currentPoints;
    } // singular letter grade
    else // plus or minus sign
    {
        if(input[1] == '+')
        {
            // an A+ is still a 4, not a 4.3
            currentPoints = std::min(4.0, currentPoints + 0.3);
        }
        else if(input[1] == '-')
        {
            currentPoints -= 0.3;
        }
        else // unexpected symbol
        {
            std::cout << "Unexpected symbol '" << input[1] << "' in letter grade." << std::endl;
            exit(EXIT_FAILURE);
        }
    }

    return currentPoints;
} // convertLetterTo4