///**
// * Created: 2/28/2025
// * Student: Perceus Willy
// * Class: CSC 131-A
// * Lab 4: BMI Calculator
// **/
//
//#include <iostream>
//#include <sstream>
//#include <cmath>
//#include <limits>
//using namespace std;
//
//double calcBMI(double weight, double height)
//{
//	return ((weight * 703)/pow(height, 2));
//}
//
//int main()
//{
//	//Initialize variables in scope
//	string height;
//	double weight,
//		   feet,
//		   inches,
//		   totalHeight;
//	//Inputs separated via a cin ignore to read height input later.
//	cout << "Enter your weight in pounds: ";
//	cin >> weight;
//	cin.ignore(numeric_limits<streamsize>::max(), '\n');
//
//	cout << "Enter your height in feet and inches (e.g. 5 10): ";
//	getline(cin, height);
//
//	//This will split the string across white space and assign the digits to variables.
//	stringstream ss(height);
//	ss >> feet >> inches;
//	totalHeight = (feet * 12) + inches;
//
//	//Use the calcBMI function from above.
//	double calculatedBMI = calcBMI(weight, totalHeight);
//	cout << "Your BMI is " << calculatedBMI << endl;
//
//	//Validation blocks and print-outs.
//	if (18.5 < calculatedBMI && calculatedBMI < 25)
//	{
//		cout << "Congratulations! Your weight is optimal." << endl;
//	}
//
//	else if (calculatedBMI < 18.5)
//	{
//		cout << "You are underweight." << endl;
//	}
//
//	else
//	{
//		cout << "You are overweight." << endl;
//	}
//
//	return 0;
//}
//
//
