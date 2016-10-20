#include "file.hpp"

// parse through the given input CSV and place student data into vector
void parseCsv(std::string inputFileName, std::vector<Student> &students, bool noHeader)
{
    std::ifstream inputFile(inputFileName.c_str(), std::ifstream::in);

    std::string currentLine, idNumber, type, scaleType;
    std::string units, grade;

    unsigned lineNumber = 1;

    if(noHeader == false)
    {
        std::getline(inputFile, currentLine);
        lineNumber++;
    } // skip header line if specified

    while(std::getline(inputFile, currentLine))
    {
        std::stringstream parser(currentLine);

        // parse through first 3 guaranteed columns

        std::getline(parser, idNumber, ',');
        std::getline(parser, type, ',');
        std::getline(parser, scaleType, ',');

        if(parser.eof())
        {
            std::cerr << "ERROR: Malformed data in first three columns of line "
                      << lineNumber << "." << std::endl;
            exit(EXIT_FAILURE);
        } // missing data in first 3 columns

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
                std::cerr << "ERROR: Odd number of class data for student "
                          << idNumber << "." << std::endl;
                exit(EXIT_FAILURE);
            } // odd number of cells

            std::getline(parser, grade, ',');

            currentStudent.addCourse(units, grade);
        } // for unknown number of tokens left in line

        students.push_back(currentStudent);
        lineNumber++;
    } // per line

    inputFile.close();
} // parseCsv()

void createOutput(std::string outputFileName, std::vector<Student> &students)
{
    std::ofstream outputFile(outputFileName.c_str(), std::ofstream::out & std::ofstream::trunc);

    for(auto const &iterator : students)
    {
        outputFile << iterator.getIdNumber() << " - " << iterator.getType() << std::endl
                   << std::setprecision(4) << iterator.getFinalGpa() << std::endl << std::endl;
    }

    outputFile.close();

    std::cout << "GPA data saved to " << outputFileName << "." << std::endl;
} // createOutput()
