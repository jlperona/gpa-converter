/**
 * \file course.cpp This file contains implementation details for the Course class,
 * as well as the letter grade to 4.0 grade point scale converter.
 */

#include "course.hpp"

Course::Course(double unitsVal, std::string givenGradeVal, std::string scaleTypeVal)
    : units(unitsVal), givenGrade(givenGradeVal), scaleType(scaleTypeVal),
      letterGrade(""), letterGradePoints(0)
{

} // Course constructor

void Course::convertToLetter()
{
    if(scaleType == "4")
    {
        letterGradePoints = convert4(givenGrade, scaleType);
        return;
    }
    else if(scaleType == "Argentina")
    {
        letterGrade = convertArgentina(givenGrade, scaleType);
    }
    else if(scaleType == "Australia")
    {
        letterGrade = convertAustralia(givenGrade, scaleType);
    }
    else if(scaleType == "Australia New South Wales")
    {
        letterGrade = convertAustraliaNewSouthWales(givenGrade, scaleType);
    }
    else if(scaleType == "Austria")
    {
        letterGrade = convertAustria(givenGrade, scaleType);
    }
    else if(scaleType == "Bangladesh")
    {
        letterGrade = convertBangladesh(givenGrade, scaleType);
    }
    else if(scaleType == "Belgium")
    {
        letterGrade = convertBelgium(givenGrade, scaleType);
    }
    else if(scaleType == "BITS Pilani")
    {
        letterGrade = convertBITSPilani(givenGrade, scaleType);
    }
    else if(scaleType == "Bulgaria")
    {
        letterGrade = convertBulgaria(givenGrade, scaleType);
    }
    else if(scaleType == "Brazil")
    {
        letterGrade = convertBrazil(givenGrade, scaleType);
    }
    else if(scaleType == "Brazil Double")
    {
        letterGrade = convertBrazilDouble(givenGrade, scaleType);
    }
    else if(scaleType == "Canada British Columbia")
    {
        letterGrade = convertCanadaBritishColumbia(givenGrade, scaleType);
    }
    else if(scaleType == "Canada Ontario")
    {
        letterGrade = convertCanadaOntario(givenGrade, scaleType);
    }
    else if(scaleType == "China")
    {
        letterGrade = convertChina(givenGrade, scaleType);
    }
    else if(scaleType == "China Modified")
    {
        letterGradePoints = convertChinaModified(givenGrade, scaleType);
        return;
    }
    else if(scaleType == "Denmark")
    {
        letterGrade = convertDenmark(givenGrade, scaleType);
    }
    else if(scaleType == "ECTS")
    {
        letterGrade = convertECTS(givenGrade, scaleType);
    }
    else if(scaleType == "France")
    {
        letterGrade = convertFrance(givenGrade, scaleType);
    }
    else if(scaleType == "Germany")
    {
        letterGrade = convertGermany(givenGrade, scaleType);
    }
    else if(scaleType == "Greece")
    {
        letterGrade = convertGreece(givenGrade, scaleType);
    }
    else if(scaleType == "India 10")
    {
        letterGrade = convertIndia10(givenGrade, scaleType);
    }
    else if(scaleType == "India 100")
    {
        letterGrade = convertIndia100(givenGrade, scaleType);
    }
    else if(scaleType == "India Marks")
    {
        letterGrade = convertIndiaMarks(givenGrade, scaleType, this->getUnits());
    }
    else if(scaleType == "Iran")
    {
        letterGrade = convertIran(givenGrade, scaleType);
    }
    else if(scaleType == "Ireland")
    {
        letterGrade = convertIreland(givenGrade, scaleType);
    }
    else if(scaleType == "Italy")
    {
        letterGrade = convertItaly(givenGrade, scaleType);
    }
    else if(scaleType == "Japan")
    {
        letterGrade = convertJapan(givenGrade, scaleType);
    }
    else if(scaleType == "Mexico")
    {
        letterGrade = convertMexico(givenGrade, scaleType);
    }
    else if(scaleType == "Nepal")
    {
        letterGrade = convertNepal(givenGrade, scaleType);
    }
    else if(scaleType == "Nepal Marks")
    {
        letterGrade = convertNepalMarks(givenGrade, scaleType, this->getUnits());
    }
    else if(scaleType == "Netherlands")
    {
        letterGrade = convertNetherlands(givenGrade, scaleType);
    }
    else if(scaleType == "Nigeria")
    {
        letterGrade = convertNigeria(givenGrade, scaleType);
    }
    else if(scaleType == "NIT Karnataka")
    {
        letterGrade = convertNITKarnataka(givenGrade, scaleType);
    }
    else if(scaleType == "Peru")
    {
        letterGrade = convertPeru(givenGrade, scaleType);
    }
    else if(scaleType == "Philippines")
    {
        letterGrade = convertPhilippines(givenGrade, scaleType);
    }
    else if(scaleType == "Romania")
    {
        letterGrade = convertRomania(givenGrade, scaleType);
    }
    else if(scaleType == "Russia")
    {
        letterGrade = convertRussia(givenGrade, scaleType);
    }
    else if(scaleType == "Saudi Arabia")
    {
        letterGrade = convertSaudiArabia(givenGrade, scaleType);
    }
    else if(scaleType == "Singapore")
    {
        letterGrade = convertSingapore(givenGrade, scaleType);
    }
    else if(scaleType == "South Africa")
    {
        letterGrade = convertSouthAfrica(givenGrade, scaleType);
    }
    else if(scaleType == "South Korea")
    {
        letterGrade = convertSouthKorea(givenGrade, scaleType);
    }
    else if(scaleType == "Spain")
    {
        letterGrade = convertSpain(givenGrade, scaleType);
    }
    else if(scaleType == "Sweden")
    {
        letterGrade = convertSweden(givenGrade, scaleType);
    }
    else if(scaleType == "Sweden 5")
    {
        letterGrade = convertSweden5(givenGrade, scaleType);
    }
    else if(scaleType == "Switzerland")
    {
        letterGrade = convertSwitzerland(givenGrade, scaleType);
    }
    else if(scaleType == "Taiwan")
    {
        letterGrade = convertTaiwan(givenGrade, scaleType);
    }
    else if(scaleType == "Uganda")
    {
        letterGrade = convertUganda(givenGrade, scaleType);
    }
    else if(scaleType == "United Kingdom")
    {
        letterGrade = convertUnitedKingdom(givenGrade, scaleType);
    }
    else if(scaleType == "United States" || scaleType == "Hong Kong" || scaleType == "Canada" || scaleType == "Brazil Single")
    {
        letterGrade = convertUnitedStates(givenGrade, scaleType);
    }
    else if(scaleType == "University of Glasgow")
    {
        letterGrade = convertUniversityOfGlasgow(givenGrade, scaleType);
    }
    else if(scaleType == "Vietnam")
    {
        letterGrade = convertVietnam(givenGrade, scaleType);
    }
    else if(scaleType == "VIT")
    {
        letterGrade = convertVIT(givenGrade, scaleType);
    }
    else
    {
        std::cerr << "ERROR: Unknown grade type scale '" << scaleType << "'." << std::endl;
        exit(EXIT_FAILURE);
    }

    letterGradePoints = convertLetterTo4(letterGrade);
} // Course::convertToLetter()

double Course::getUnits() const
{
    return units;
} // Course::getUnits()

double Course::getGradePoints() const
{
    return letterGradePoints;
} // Course::getGradePoints()

double convertLetterTo4(std::string input)
{
    double currentPoints = 0;

    // Handle letter grades first.
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
        std::cerr << "ERROR: Unexpected symbol '" << input[0]
                  << "' in letter grade '" << input << "'." << std::endl;
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
            std::cerr << "ERROR: Unexpected letter grade '" << input << "'." << std::endl;
            exit(EXIT_FAILURE);
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
            std::cerr << "ERROR: Unexpected symbol '" << input[1]
                      << "' in letter grade '" << input << "'." << std::endl;
            exit(EXIT_FAILURE);
        }
    }

    return currentPoints;
} // convertLetterTo4
