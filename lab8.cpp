/**
 * Created: 4/4/2025
 * Student: Perceus Willy
 * Class: CSC 131-A
 * Lab 8: Calculating Standard Deviation using an array and vector of double.
 **/
#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

/**
 * @nums Numbers to be passed through from a defined array
 * @size Size of the array to be passed through
 * Calculates the standard deviation based on the provided formula
 */
double standardDeviation(double nums[], int size)
{
	//Define variables
	double sumTotal = 0.0, variance = 0.0, mean, deviation;

	//Calculate total sum
	for (int i = 0 ; i < size; i++)
	{
		sumTotal += nums[i];
	}

	//Get average
	mean = sumTotal / size;

	//Calculate the variance by summing the squared differences ("μ")
	for (int i = 0 ; i < size; i++)
	{
		variance += pow((nums[i] - mean), 2);
	}

	variance /= size;

	//Compute standard deviation via the sqrt of the variance
	deviation = sqrt(variance);

	//Return the value
	return deviation;
}

/**
 * @nums Numbers to be passed through from copied array to vector
 * Similar to the above function, all calculated variables are the same except instead size is defined within the function
 */
double standardDeviation(vector<double> &nums)
{
	double sumTotal = 0.0, variance = 0.0, mean, deviation;
	int size = nums.size();

	for (double num : nums)
	{
		sumTotal += num;
	}

	mean = sumTotal / size;

	for (int i = 0 ; i < size; i++)
	{
		variance += pow((nums[i] - mean), 2);
	}

	variance /= size;

	deviation = sqrt(variance);

	return deviation;
}

int main()
{
	//Define the array to be passed as provided
	double nums[] = {2, 11, 4, 5, 9, 5, 4, 12, 7, 8, 9, 3, 7, 4, 12, 10, 9, 6, 9, 4};
	int sizeArr = sizeof(nums) / sizeof(nums[0]);

	//Convert array to vector
	vector<double> numbersAsVector;
	for (int i = 0 ; i < sizeArr ; i++)
	{
		numbersAsVector.push_back(nums[i]);
	}

	// Compute standard deviations
	double deviation = standardDeviation(nums, sizeArr);
	double deviationVec = standardDeviation(numbersAsVector);

	// Print results
	cout << fixed << setprecision(2);
	cout << "Testing first function: Standard Deviation is " << deviation << endl;
	cout << "Testing second function: Standard Deviation is " << deviationVec << endl;

	return 0;
}
