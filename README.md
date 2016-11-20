# gpa-converter

A C++ program to take in student transcript data via CSV format, and convert it to a final GPA in the United States' 4.0 grading scale.

## Building

Compile with `make`. No other libraries are necessary. If you'd like to change the compiler, edit the `CXX` variable in the Makefile.

The documentation uses Doxygen. Install it using your package manager. Building the documentation is as easy as `doxygen`.

## Usage

    gpa-converter [--no-header] input.csv output.txt

The input CSV file should not contain commas in the data fields, as this adds quotes into each field. The format of the file should look like this:

    Header row will be ignored
    Student 1 ID Number, Secondary Identifier, Grade Scale Type, Class 1 Units, Class 1 Grade, Class 2 Units, Class 2 Grade, ...
    Student 2 ID Number, Secondary Identifier, Grade Scale Type, ...
    ...

Use `--no-header` if your data does not have a header row.

The output file will be overwritten with the final GPA data. The ID number and secondary identifier can be anything. I use the secondary identifier to separate multiple transcripts for the same student.

### Grade Scales

All grade scale conversions are credited to [ForeignCredits](http://www.foreigncredits.com/Resources/Grade-Conversion/). Grade scales convert number grades unless specified otherwise. The following grade scales have been implemented:

* `Australia Secondary` *(letter)*
    * The common post-secondary education grading scale in Australia.
* `Bangladesh`
    * The most common grading scale in Bangladesh, the 100 point scale.
* `China`
    * The most common grading scale in China, the 100 point scale.
* `India 10`
    * The UGC 10 point scale used in India.
* `India 100`
    * The most common grading scale in India, the 100 point scale.
* `Saudi Arabia 5` *(letter)*
    * The 5 point scale used in Saudi Arabia.
* `Switzerland 6`
    * The most common grading scale in Switzerland, the 6 point scale.
* `United States` or `Taiwan` *(letter)*
    * United States letter grades. This scale also can convert the 4.3 grade scale commonly used in Taiwan and China.

The appropriate string above goes in the *Grade Scale Type* column for each student.

More will be added as I encounter them. If you have any that you would like to add, feel free to make a [pull request](https://github.com/jlperona/gpa-converter/pulls).

## Motivation

This was designed for personal use. Some sort of conversion needs to be done for non-US GPAs in order to be able to make fair comparisons between students. In the past, what was done at my workplace was:

1. Take student transcript data
2. Input it into a web app
3. Calculate the student's GPA
4. Print out the web app page

This seemed inefficient. This app helps speed the process along.

### Benefits

* Data entry is easier
    * It's much easier to use your favorite spreadsheet editor to enter data than using a web app
* Data is saved to CSV
    * Parsing is easy
    * Can be uploaded to a cloud storage website, rather than printing them out
* Open source
    * Code easily checked for errors rather than relying on the programming of a web app

### Drawbacks

* Data is saved to CSV
    * Not the most elegant format to use
    * Data used shouldn't contain quotes, newlines, or commas, which makes the choice of CSV *okay*
* Doesn't fix the time spent on data entry
    * It only helps speed it up
    * Programmatically determining grades and credit hours would require OCR

## Future

Some of my future goals for this program:

* Make the CSV parsing more robust
    * Deal with quotes that are used to wrap cells with commas in them
        * This may not be needed as cells shouldn't need to contain commas to begin with
* Add more grade scales as I encounter them
