#include "course.hpp"
#include "file.hpp"
#include "student.hpp"

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main(int argc, char* argv[])
{
    // expecting exactly two arguments, the CSV file and the output file name
    if(argc != 3)
    {
        std::cout << "usage: gpa-converter your.csv output.txt" << std::endl;
        return 0;
    } // unexpected number of arguments

    std::string inputFileName = argv[1], outputFileName = argv[2];
    std::vector<Student> students;

    parseCsv(inputFileName, students);
    createOutput(outputFileName, students);
    return 0;
} // main()