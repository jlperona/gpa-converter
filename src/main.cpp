#include "course.hpp"
#include "student.hpp"

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char* argv[])
{
    // expecting exactly two arguments, the CSV file and the output file name
    if(argc != 3)
    {
        std::cout << "usage: gpa-converter your.csv output.txt" << std::endl;
        return 0;
    } // unexpected number of arguments

    std::string inputFileName = argv[1];
    std::ifstream inputFile(inputFileName.c_str(), std::ifstream::in);
    inputFile.close();

    std::string outputFileName = argv[2];
    std::ofstream outputFile(outputFileName.c_str(), std::ofstream::out & std::ofstream::trunc);
    outputFile.close();
    return 0;
} // main()