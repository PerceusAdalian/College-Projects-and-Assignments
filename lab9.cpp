/**
 * Created: 4/25/2025
 * Student: Perceus Willy
 * Class: CSC 131-A
 * Lab 9: Pointer utilization, integer to pointer addition, and averaging numbers of double.
 * Note: I'm currently struggling with severe insomnia; sorry if my comments are weird.
 **/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// AddThree takes in an integer as a pointer, manipulates and prints the value of the pointer plus 3.
void addThree(int *ptr)
{
	*ptr += 3;
	cout << "After calling addThree, x is " << *ptr << endl;
}

//Library implementation -- These are methods I designed from previous projects:

double accumulate(const vector<double> &nums) //Accumulates the numbers passed from an array vector.
{
	double total = 0.0;
	for (double num : nums)
	{
		total += num;
	}
	return total;
}

double asAverage(const vector<double> &nums) //Returns the average of accumulated numbers.
{
	return nums.empty() ? 0.0 : (accumulate(nums) / nums.size()); //Prevent division by zero if an index from the passed array vector is empty/null.
}

int main()
{
	string inputNumber;
	cout << "Input any number: ";
	getline(cin, inputNumber);

	//Converts the string to an integer to be assigned as a pointer.
	int x = stoi(inputNumber);
	cout << "x is " << x << endl;

	int* xPtr = &x;
	addThree(xPtr);

	cin.clear();

	string numDoubles;
	cout << "Input any number: ";
	getline(cin, numDoubles);

	//Array handling and assigning to vector conversion, used to evaluate as average.
	int arraySize = stoi(numDoubles);
	cout << "Enter " << arraySize << " doubles: " << endl;
	int arr[arraySize];
	vector<double> nums;
	for (int i = 0 ; i < arraySize ; i++)
	{
		cout << "Value " << i + 1 << ": ";
		cin >> arr[i];
		nums.push_back(arr[i]);
	}

	double avg = asAverage(nums);
	cout << "The average is " << avg << endl;

	return 0;
}
