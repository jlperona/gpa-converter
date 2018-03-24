# gpa-converter

A C++ program to take in student transcript data via CSV format, and convert it to a final GPA in the United States' 4.0 grading scale.

## Build

Compile with `make`.
No other libraries are necessary.
If you'd like to change the compiler, edit the `CXX` variable in the Makefile.

The documentation uses Doxygen. Install it using your package manager.
Building the documentation is as easy as `doxygen`.

## Use

    gpa-converter [--no-header] input.csv output.txt

The input CSV file should not contain commas in the data fields, as this adds quotes into each field.
The format of the file should look like this:

    Header row will be ignored.
    Student 1 ID Number, Secondary Identifier, Grade Scale Type, Class 1 Units, Class 1 Grade, Class 2 Units, Class 2 Grade, ...
    Student 2 ID Number, Secondary Identifier, Grade Scale Type, ...
    ...

Use `--no-header` if your data does not have a header row.

The output file will be overwritten with the final GPA data.
The ID number and secondary identifier can be anything.
I use the secondary identifier to separate multiple transcripts for the same student.

## Grade Scales

All grade scale conversions are credited to [ForeignCredits](http://www.foreigncredits.com/Resources/Grade-Conversion/).
The appropriate string below goes in the *Grade Scale Type* column for each student.

The following grade scales have been implemented:

### Africa

* `Nigeria`
    * Most common scale in Nigeria.
    * Letter grades.
* `Uganda`
    * 9 point scale in Uganda.
    * Grades range from 1 - 9.

### America

* `Brazil`
    * Most common grade scale in Brazil.
    * Grades range from 0 - 100.
* `Brazil Double`
    * Double letter grade scale used in Brazil.
    * Letter grades.
* `Canada`
    * Alias of `United States`.
    * See `United States` below for more information.
    * Letter grades.
* `Canada British Columbia`
    * Most common scale in British Columbia, Canada.
    * Grades range from 0 - 100.
* `Canada Ontario`
    * Most common scale in Ontario, Canada.
    * Grades range from 0 - 100.
* `Mexico`
    * Tertiary scale with 6 as passing.
    * Grades range from 0 - 10.
* `Peru`
    * Most common scale in Peru.
    * Grades range from 0 - 20.
* `United States`
    * 4.0 scale used in the United States.
    * Also used in Canada, China, Hong Kong, Japan, and Taiwan.
        * Assumes that A+ is equivalent to 4.0.
        * Can also convert the 4.3 scale where A+ is equivalent to 4.3.
    * Letter grades.

### Asia (excluding India)

* `Bangladesh`
    * Most common scale in Bangladesh.
    * Grades range from 0 - 100.
* `China`
    * Most common scale in China.
    * Grades range from 0 - 100.
* `China Modified`
    * The Chinese conversion scale has been modified to use the one in use at UC Davis.
    * Grades range from 0 - 100.
* `Hong Kong`
    * Alias of `United States`.
    * See `United States` above for more information.
    * Letter grades.
* `Iran`
    * Most common scale in Iran.
    * Grades range from 0 - 20.
* `Japan`
    * Number grades in Japan.
    * Grades range from 0 - 100.
* `Nepal`
    * Most common scale in Nepal.
    * Grades range from 0 - 100.
* `Nepal Marks`
    * Scale for certain universities in Nepal.
        * Useful when the university only uses marks and does not provide an equivalent to units.
        * Uses the same scale as `Nepal`.
        * Calculates the percentage based on the units input being equal to 100%.
        * For example, 200 units with a grade of 150 is equal to 150/200 = 75%.
    * Grades range from 0 to the number of units input.
* `Philippines`
    * Most common scale in the Philippines.
    * Grades range from 1 - 5.
* `Russia`
    * Most common scale in Russia.
    * Letter grades.
    * Either the full translated grade (`Excellent`, etc.) or the first letter of the translated grade (`E`, etc.) is accepted.
* `Saudi Arabia`
    * University-level scale in Saudi Arabia.
    * Letter grades.
* `Singapore`
    * Most common scale in Singapore.
    * Letter grades.
* `South Korea`
    * Post-secondary scale in South Korea.
    * Letter grades.
* `Taiwan`
    * Tertiary scale in Taiwan.
    * Grades range from 0 - 100.
* `Vietnam`
    * Most common scale in Vietnam.
    * Grades range from 0 - 10.

### Europe

* `Belgium`
    * Most common scale in Belgium.
    * Grades range from 0 - 20.
* `Bulgaria`
    * Most common scale in Bulgaria.
    * Grades range from 2 - 6.
* `Denmark`
    * Most common scale in Denmark.
    * Grades range from 0 - 13.
* `ECTS`
    * European Credit Transfer System scale.
    * Letter grades.
* `France`
    * Most common scale in France.
    * Grades range from 0 - 20.
* `Germany`
    * Tertiary scale in Germany.
    * Grades range from 1 - 6.
* `Greece`
    * Most common scale in Greece.
    * Grades range from 0 - 10.
* `Ireland`
    * Most common scale in Ireland.
    * Grades range from 0 - 100.
* `Netherlands`
    * Most common scale in the Netherlands.
    * Grades range from 0 - 12 or -3.
* `Spain`
    * Most common scale in Spain.
    * Grades range from 0 - 10.
* `Sweden`
    * Most common scale in Sweden.
    * Letter grades.
* `Sweden 5`
    * Five point scale in Sweden.
    * Grades range from 1 - 5.
* `Switzerland`
    * Most common scale in Switzerland.
    * Grades range from 0 - 6.
* `United Kingdom`
    * Most common scale in the United Kingdom.
    * Grades range from 0 - 100.
* `University of Glasgow`
    * Scale specifically for University of Glasgow in Scotland.
    * Letter grades.

### India

* `India 10`
    * UGC 10 point scale in India.
    * Grades range from 0 - 10.
    * *See below for special information about this scale.*
* `India 100`
    * Most common scale in India.
    * Grades range from 0 - 100.
* `India Marks`
    * Scale for certain universities in India.
        * Useful when the university only uses marks and does not provide an equivalent to units.
        * Uses the same scale as `India 100`.
        * Calculates the percentage based on the units input being equal to 100%.
        * For example, 200 units with a grade of 150 is equal to 150/200 = 75%.
    * Grades range from 0 to the number of units input.

### Oceania

* `Australia`
    * Post-secondary scale in Australia.
    * Letter grades.
* `Australia New South Wales`
    * Most common scale in New South Wales, Australia.
    * Grades range from 0 - 100.
    * For letter grades, use `Australia` above.

### Indian 10 Point Scale

The Indian 10 point scale (`India 10` above) is somewhat unique, in that many universities use the 10 point scale, but add their own letter grades.
Typing in letter grades is easier than doing the conversion manually, so there are grade scales that support each university's specific letter grades.

Underneath each grade scale listed below is the university that utilizes it.

* `India 10`
    * All universities that report numbers instead of a letter grade.
* `India 10 SABCDEFN`
    * VIT University, among others.

The table below lists what each letter in each scale corresponds to.

| Scale | SABCDEFN |
|-------|----------|
| 10    | S        |
| 9     | A        |
| 8     | B        |
| 7     | C        |
| 6     | D        |
| 5     | E        |
| 4     |          |
| 3     |          |
| 2     |          |
| 1     | F, N     |

## Motivation

This was designed for personal use.
Some sort of conversion needs to be done for non-US GPAs in order to be able to make fair comparisons between students.
In the past, what was done at my workplace was:

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

I intend to add more grade scales as I encounter them.

### Pull Requests

If you have any that you would like to add, feel free to make a [pull request](https://github.com/jlperona/gpa-converter/pulls).

### Adding a New Scale

If you would like to see a clean example of how to add a new grade scale, the [commit for Sweden 5](https://github.com/jlperona/gpa-converter/commit/cc9e422af9b546d0b225ee88421cac10523af439) shows all the steps necessary to add a new scale.

Below are the steps to add a new scale:

1. Create the function in the appropriate country `.cpp` file.
    * Function names should be in the form of `convertCountry()`.
    * Copying the style of other functions is encouraged.
2. Create the prototype and documentation in the appropriate country `.hpp` file.
    * Again, copying the style and documentation of other functions is encouraged.
3. Update `Course::convertToLetter()` in `course.cpp` to add the scale.
4. Update the README (this document) to list the new scale.
