///**
// * Created: 3/28/2025
// * Student: Perceus Willy
// * Class: CSC 131-A
// * Lab 7: File number parser
// **/
//#include <iostream>
//#include <iomanip>
//#include <vector>
//#include <algorithm>
//#include <fstream>
//#include <numeric>
//using namespace std;
//
//double findLowest(const vector<double> &element)
//{
//	return *min_element(element.begin(), element.end()); //From a previous project; Finds and returns the actual value
//}
//
//double findHighest(const vector<double> &element)
//{
//	return *max_element(element.begin(), element.end()); //From a previous project; Finds and returns the actual value
//}
//
//double accumulate(const vector<double> &nums) //Accumulates the numbers passed from an array vector
//{
//	double total = 0.0;
//	for (double num : nums)
//	{
//		total += num;
//	}
//	return total;
//}
//
//double asAverage(const vector<double> &nums) //Returns the average of accumulated numbers
//{
//	return nums.empty() ? 0.0 : (accumulate(nums) / nums.size()); //Prevent division by zero if an index from the passed array vector is empty/null.
//}
//
//int main()
//{
//	ifstream inputFile;
//	double value;
//	vector<double> numbers;
//
//	inputFile.open("numbers.txt");
//
//	if (!inputFile) //If the file isn't found, print an error message and return
//	{
//		cout << "{!} Unable to open file." << endl;
//		return 1;
//	}
//
//	while (inputFile >> value) //Places each value from the opened file into an array vector
//	{
//		numbers.push_back(value);
//	}
//
//	inputFile.close(); // Closes the file after reading.
//
//	if (numbers.empty()) // If the array is empty, print an error message and return
//	{
//		cout << "{!} No numbers found in file. Canceling..";
//		return 1;
//	}
//
//	//Evaluate and calculations
//	double lowestNum = findLowest(numbers);
//	double highestNum = findHighest(numbers);
//	double sumNums = accumulate(numbers);
//	double averageNum = asAverage(numbers);
//
//	//Print the variables, formatted
//	cout << fixed << setprecision(2);
//	cout << "The lowest number is " << lowestNum << endl;
//	cout << "The highest number is " << highestNum << endl;
//	cout << "The total of the numbers is " << sumNums << endl;
//	cout << "The average of the numbers in the array is " << averageNum << endl;
//
//	return 0;
//}
//
