#include "file.hpp"
#include "student.hpp"

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[])
{
    // expecting exactly two arguments, the CSV file and the output file name
    if(argc < 3 || argc > 4)
    {
        std::cout << "usage: gpa-converter [--no-header] your.csv output.txt" << std::endl;
        return 0;
    } // unexpected number of arguments

    std::string headerFlag = argv[1];
    bool noHeader = false;

    if(headerFlag == "--no-header")
    {
        noHeader = true;
    }

    std::string inputFileName = argv[argc - 2], outputFileName = argv[argc - 1];
    std::vector<Student> students;

    parseCsv(inputFileName, students, noHeader);

    for(auto &iterator : students)
    {
        iterator.convertClasses();
        iterator.calculateGpa();
    }

    createOutput(outputFileName, students);
    return 0;
} // main()
