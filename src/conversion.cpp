/**
 * \file conversion.cpp This file contains implementation details for the conversion functions.
 */

#include "conversion.hpp"

std::string convertUnitedStates(std::string input)
{
    // length of input should only be one or two, example "A" or "A-"
    if(!(input.length() == 1 || input.length() == 2))
    {
        std::cerr << "ERROR: Invalid grade '" << input << "' in student using grade scale 'United States'." << std::endl;
        exit(EXIT_FAILURE);
    }

    if(!(input[0] == 'A' || input[0] == 'B' || input[0] == 'C' || input[0] == 'D'|| input[0] == 'F'))
    {
        std::cerr << "ERROR: Invalid grade '" << input << "' in student using grade scale 'United States'." << std::endl;
        exit(EXIT_FAILURE);
    } // first letter unexpected

    if(input.length() == 2)
    {
        if(!(input[1] == '+' || input[1] == '-'))
        {
            std::cerr << "ERROR: Invalid grade '" << input << "' in student using grade scale 'United States'." << std::endl;
            exit(EXIT_FAILURE);
        }
    } // plus or minus sign

    return input;
} // convertUnitedStates()

std::string convertChina(std::string input)
{
    double grade = -1;

    try // attempt to convert to number
    {
        grade = std::stod(input);
    }
    catch(const std::invalid_argument &e)
    {
        std::cerr << "ERROR: Invalid grade '" << input << "' in student using grade scale 'China'." << std::endl;
        exit(EXIT_FAILURE);
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
        std::cerr << "ERROR: Invalid grade '" << input << "' in student using grade scale 'China'." << std::endl;
        exit(EXIT_FAILURE);
    }
} // convertChina()

std::string convertIndia100(std::string input)
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

    try // attempt to convert to number
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
        std::cerr << "ERROR: Invalid grade '" << input << "' in student using grade scale 'India 10'." << std::endl;
        exit(EXIT_FAILURE);
    }
} // convertIndia10()

std::string convertSwitzerland6(std::string input)
{
    double grade = -1;

    try // attempt to convert to number
    {
        grade = std::stod(input);
    }
    catch(const std::invalid_argument &e)
    {
        std::cerr << "ERROR: Invalid grade '" << input << "' in student using grade scale 'Switzerland 6'." << std::endl;
        exit(EXIT_FAILURE);
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
        std::cerr << "ERROR: Invalid grade '" << input << "' in student using grade scale 'Switzerland 6'." << std::endl;
        exit(EXIT_FAILURE);
    }
} // convertSwitzerland6()