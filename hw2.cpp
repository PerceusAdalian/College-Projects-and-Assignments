/**
 * Created: 2/10/2025
 * Student: Perceus Willy
 * Class: CSC 131-A
 * Homework 2 : A simple geometry calculator in C++
 **/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <set>
using namespace std;

double areaCircle(double r)
{
	return M_PI * (r * r);
}

double areaRectangle(double l, double w)
{
	return l*w;
}

double areaTriangle(double b, double h)
{
	return (b*h)*0.5;
}

int main()
{
	//Creating a dictionary of <type::DOUBLE>.
	set<double> responseDict = {1, 2, 3, 4};

	cout << "Geometry Calculator\n" << endl;
	cout << "1. Calculate the area of a Circle\n"
		 << "2. Calculate the area of a Rectangle\n"
		 << "3. Calculate the area of a Triangle\n"
		 << "4. Quit\n\n" << endl;
	cout << "Enter your choice (1-4): ";

	double response;
	cin >> response;

	if (!double(response))
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(),'\n');
		cout << "Invalid operand(s), expected <response> as <dType::DOUBLE>\n\n";
		return 1;
	}

	/**
	 * Comparable to how Java handles object validation in a collection;
	 * This acts as a loop through <response> as contained in <responseDict>.
	 **/
	if (responseDict.find(response) == responseDict.end())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(),'\n');
		cout << "Invalid operand(s), expected <type::DOUBLE> response between <ONE> and <FOUR>\n\n";
		return 1;
	}


	//Validated Responses Through First Block, Continuing...
	cin.clear();
	cin.ignore();
	if (response == 1)
	{
		double radius;
		cout << "Enter the circle's radius: ";
		cin >> radius;
		//Validate <radius> as <dType::DOUBLE>
		if (!double(radius))
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cout << "Invalid operand(s), expected <radius> as <dType::DOUBLE>\n\n";
			return 1;
		}
		//return calculation
		cout << "\nThe area is " << areaCircle(radius) << endl;
		cin.clear();
		return 0;
	}

	if (response == 2)
	{
		double length;
		double width;
		cout << "Enter the rectangle's length: ";
		cin >> length;
		cout << "Enter the rectangle's width: ";
		cin >> width;
		//Validate both <length> AND <width> as <dType::DOUBLE>
		if (!double(length) || !double(width))
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cout << "Invalid operand(s), expected <length||width> as <dType::DOUBLE>\n\n";
			return 1;
		}
		//return calculation
		cout << "\nThe area is " << areaRectangle(length, width) << endl;
		cin.clear();
		return 0;
	}

	if (response == 3)
	{
		double base;
		double height;
		cout << "Enter the length of the base: ";
		cin >> base;
		cout << "Enter the triangle's height: ";
		cin >> height;
		//Validate both <base> AND <height> as <dType::DOUBLE>
		if (!double(base) || !double(height))
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cout << "Invalid operand(s), expected <base||height> as <dType::DOUBLE>\n\n";
			return 1;
		}
		//return calculation
		cout << "\nThe area is " << areaTriangle(base, height) << endl;
		cin.clear();
		return 0;
	}

	if (response == 4)
	{
		cout << "Exiting...\n" << endl;
		return 0;
	}

	cout << "[!] An unknown error has occurred || Stopping..." << endl;
	return 1;
}
