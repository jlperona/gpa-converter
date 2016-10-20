#include "conversion.hpp"

/* All information for non-US grade conversion is taken from the following website:
 * foreigncredits.com/resources/grade-conversion */

std::string convertIndia100(std::string input)
{
    if(input == "G")
    {
        return "D";
    }

    double grade = -1;

    try // attempt to convert this grade
    {
        grade = std::stod(input);
    }
    catch(const std::invalid_argument &e)
    {
        std::cerr << "ERROR: Invalid grade '" << input << "' in student using grade scale 'India 100'." << std::endl;
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
        std::cerr << "ERROR: Invalid grade '" << input << "' in student using grade scale 'India 100'." << std::endl;
        exit(EXIT_FAILURE);
    }
} // convertIndia100()

std::string convertIndia10(std::string input)
{
    double grade = -1;

    try // attempt to convert this grade
    {
        grade = std::stod(input);
    }
    catch(const std::invalid_argument &e)
    {
        std::cerr << "ERROR: Invalid grade '" << input << "' in student using grade scale 'India 10'." << std::endl;
        exit(EXIT_FAILURE);
    } // invalid grade

    if(grade >= 9 && grade <= 10)
    {
        return "A";
    }
    else if (grade >= 8 && grade < 9)
    {
        return "B+";
    }
    else if (grade >= 7 && grade < 8)
    {
        return "B";
    }
    else if (grade >= 6 && grade < 7)
    {
        return "B-";
    }
    else if (grade >= 4 && grade < 6)
    {
        return "C";
    }
    else if (grade >= 0 && grade < 4)
    {
        return "F";
    }
    else // invalid
    {
        std::cerr << "ERROR: Invalid grade '" << input << "' in student using grade scale 'India 10'." << std::endl;
        exit(EXIT_FAILURE);
    }
} // convertIndia10()
