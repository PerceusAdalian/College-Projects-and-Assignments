/**
 * Created: 3/9/2025
 * Student: Perceus Willy
 * Class: CSC 131-A
 * Homework 3 : ISBN CheckSum
 * Note: You may have to change the file path for the input file's open parameter.
 **/
//
//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//int toDigit(char ch)
//{
//	return ch - '0'; //Instructor provided function; ASCII conversion.
//}
//
//int checkSum(string chars)
//{
//	int sumDigits = 0;
//
//	for (size_t i = 0 ; i < 12 ; ++i) // Iterates over the first 12 digits of the ISBN number.
//	{
//		sumDigits += (i % 2 == 0) ? toDigit(chars[i]) : toDigit(chars[i]) * 3; // Adds digits if a character is even. Otherwise, multiplies by 3 and adds.
//	}
//
//	int checksum = (10 - (sumDigits % 10)) % 10; // Computes checksum as the difference to reach the next multiple of 10.
//
//	return checksum;
//}
//
//int main()
//{
//	ifstream inputFile;
//	string line;
//
//	inputFile.open("isbn.txt"); // Opens the desired file to be read.
//
//	if (inputFile.is_open()) // Check if the file was successfully opened.
//	{
//		while (getline(inputFile, line))
//		{
//			cout << checkSum(line) << endl; // Prints out the result of checksum for every line until the file has been completely read.
//		}
//		inputFile.close(); // Closes the file after reading.
//	}
//
//	else // Display an error message if the file can't be read.
//	{
//		cout << "{!} Unable to open file." << endl;
//		return 1;
//	}
//
//	return 0;
//}
