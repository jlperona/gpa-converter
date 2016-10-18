#include "file.hpp"

// parse through the given input CSV and place student data into vector
void parseCsv(std::string inputFileName, std::vector<Student> &students)
{
    std::ifstream inputFile(inputFileName.c_str(), std::ifstream::in);

    std::string currentLine, idNumber, type, scaleType;
    std::string units, grade;

    // skip header line
    // (TO DO) Allow for no header with flag
    std::getline(inputFile, currentLine);

    while(std::getline(inputFile, currentLine))
    {
        std::stringstream parser(currentLine);

        // parse through first 3 guaranteed columns

        std::getline(parser, idNumber, ',');
        std::getline(parser, type, ',');
        std::getline(parser, scaleType, ',');

        Student currentStudent(idNumber, type, scaleType);

        while(std::getline(parser, units, ','))
        {  
            // empty string implies blank cell, which can happen with differing amounts of classes
            if(units == "")
            {
                break;
            } // blank cell

            // eof right after the first getline means there is an odd number of cells parsed
            if(parser.eof())
            {
                std::cout << "ERROR: Odd number of class data for student " << idNumber << "." << std::endl
                          << "Check your data." << std::endl;
                exit(EXIT_FAILURE);
            } // odd number of cells

            std::getline(parser, grade, ',');

            currentStudent.addCourse(units, grade);
        } // for unknown number of tokens left in line

        students.push_back(currentStudent);
    } // per line

    inputFile.close();
} // parseCsv()

void createOutput(std::string outputFileName, std::vector<Student> &students)
{
    std::ofstream outputFile(outputFileName.c_str(), std::ofstream::out & std::ofstream::trunc);

    outputFile.close();

    std::cout << "GPA data saved to " << outputFileName << "." << std::endl;
} // createOutput()