/**
 * Created: 4/25/2025
 * Student: Perceus Willy
 * Class: CSC 131-A
 * Lab 10: Extracting numbers from a given parsed string literal as a given date,
 * converting the values to an integer to evaluate against the year date as integer constant to validate if the string is a "magic date".
 * Note: I'm currently struggling with severe insomnia; sorry if my comments are weird.
 **/

#include <iostream>
#include <string>

using namespace std;

bool isMagicDate(string dateString)
{
    // Finds the slashes the split the string and assign substrings for later use.
    int firstSlash = dateString.find('/');
    int secondSlash = dateString.find('/', firstSlash + 1);

    // Assign the date to substrings.
    string monthStr = dateString.substr(0, firstSlash);
    string dayStr = dateString.substr(firstSlash + 1, secondSlash - firstSlash - 1);
    string yearStr = dateString.substr(secondSlash + 1);

    // Converts the days/months/years to ints.
    int monthAsInt = stoi(monthStr);
    int dayAsInt = stoi(dayStr);
    int yearAsInt = stoi(yearStr);

    // Display extracted values.
    cout
	<< "The month is " << monthAsInt << ", "
    << "the day is " << dayAsInt << ", "
    << "and the year is " << yearAsInt << ". "
	<< endl;

    // Check if dateString is a magic date using the data.
    return (monthAsInt * dayAsInt) == yearAsInt;
}

int main()
{
    string dateString;

    cout << "Enter date in the format mm/dd/yy: ";
    getline(cin, dateString);

    bool magicDate = isMagicDate(dateString);

    if (magicDate)
    {
        cout << dateString << " is a magic date." << endl;
    }

    else
    {
        cout << dateString << " is NOT a magic date." << endl;
    }

    return 0;
}


