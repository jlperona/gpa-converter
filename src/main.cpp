/**
 * \file main.cpp This file contains the main program logic, as well as
 *  command line argument parsing.
 */

#include "file.hpp"
#include "student.hpp"

#include <iostream>
#include <string>
#include <vector>

/**
 * The main loop of the program. It parses the command line arugments, parses the input file,
 * calculates each student's final GPA based on that information, then creates the output file.
 * \param argc Adding one for the program name itself, argc should only be between 3 and 4.
 * \param argv The only expected arguments are the input file, output file, and optional
 * --no-header flag.
 */
int main(int argc, char* argv[])
{
    // Minimum of three command line arguments, with --no-header being optional.
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
    } // --no-header parsing

    // Input is second to last, output is last.
    std::string inputFileName = argv[argc - 2], outputFileName = argv[argc - 1];
    std::vector<Student> students;

    // Parse input file.
    parseCsv(inputFileName, students, noHeader);

    for(auto &iterator : students)
    {
        iterator.convertClasses();
        iterator.calculateGpa();
    } // calculate final GPA

    // Create output file.
    createOutput(outputFileName, students);
    return 0;
} // main()
