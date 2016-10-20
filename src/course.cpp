#include "course.hpp"

Course::Course(double unitsVal, std::string givenGradeVal, std::string scaleTypeVal)
    : units(unitsVal), givenGrade(givenGradeVal), scaleType(scaleTypeVal),
      letterGrade(""), letterGradePoints(0)
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
        std::cout << "Unknown grade type scale '" << scaleType << "'." << std::endl
                  << "Check your data." << std::endl;
        exit(EXIT_FAILURE);
    }

    letterGradePoints = convertLetterTo4(letterGrade);
} // Course::convertToLetter()

double Course::getUnits()
{
    return units;
} // Course::getUnits()

double Course::getGradePoints()
{
    return letterGradePoints;
} // Course::getGradePoints()

// as this function is not used with given CSV data, it should never throw an error
// assuming correct code, anyway
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
        if(input.length() != 2)
        {
            std::cout << "Unexpected grade '" << input << "'." << std::endl;
        } // invalid
        else if(input[1] == '+')
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
