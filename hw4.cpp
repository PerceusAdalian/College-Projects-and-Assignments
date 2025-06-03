///**
// * Created: 4/10/2025
// * Student: Perceus Willy
// * Class: CSC 131-A
// * Homework 4 : Check and validate magic square.
// * Note: I ran out of time to implement the full file reading, parsing, and validation, so I went ahead with writing the preliminary example of the HW outline with preset values for the input matrix.
// **/

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int accumulate(vector<int> &nums)
{
	int sum = 0;
	for (int num : nums)
	{
		sum+=num;
	}
	return sum;
}

//Will return true if there are duplicates.
bool hasDuplicates(int matrix[3][3])
{
	unordered_set<int> counts;
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			//If counts has a number more than once, return true.
			if (counts.count(matrix[i][j]) > 0)
			{
				return true;
			}
			//Otherwise, return a set that doesn't contain duplicates.
			counts.insert(matrix[i][j]);
		}
	}
	return false;
}

//Evaluate a given matrix to validate against a predicted sum constant.
void eval(int matrix[3][3])
{
	// Check rows, and print either valid/invalid.
	for (int i = 0; i < 3; ++i)
	{
		vector<int> nums;
		for (int j = 0; j < 3; ++j)
		{
			nums.push_back(matrix[i][j]);
		}
		int sum = accumulate(nums);
		cout << "Row [" << i << "] Sum: " << sum << (sum == 15 ? " | VALID" : " | INVALID") << endl;
	}

	// Check columns, and print either valid/invalid.
	for (int j = 0; j < 3; ++j)
	{
		vector<int> nums;
		for (int i = 0; i < 3; ++i)
		{
			nums.push_back(matrix[i][j]);
		}
		int sum = accumulate(nums);
		cout << "Col [" << j << "] Sum: " << sum << (sum == 15 ? " | VALID" : " | INVALID") << endl;
	}

	// Check main diagonal, sum the values and print either valid/invalid.
	vector<int> main_diag;
	for (int i = 0; i < 3; ++i)
	{
		//Predicted path: [0][0], [1][1], [2][2]
		main_diag.push_back(matrix[i][i]);
	}
	int main_sum = accumulate(main_diag);
	cout << "Main Diagonal Sum: " << main_sum << (main_sum == 15 ? " | VALID" : " | INVALID") << endl;

	// Check secondary diagonal, and print the same as above.
	vector<int> sec_diag;
	for (int i = 0; i < 3; ++i)
	{
		//Predicted path: [0][2], [1][1], [2][0]
		sec_diag.push_back(matrix[i][2 - i]);
	}
	int sec_sum = accumulate(sec_diag);
	cout << "Secondary Diagonal Sum: " << sec_sum << (sec_sum == 15 ? " | VALID" : " | INVALID") << endl;
}

int main()
{
	//Please rearrange or change the values as necessary to test.
	int matrix[3][3]={{4,3,8},
					  {9,5,1},
					  {2,7,6}};

	//If the matrix has duplicates, return an error.
	if (hasDuplicates(matrix))
	{
		cout << "This is an invalid magic square." << endl;
		return 1;
	}

	cout << "This is a valid magic square." << endl;
	cout << "Evaluating given matrix: " << endl;

	//Validate magic square against predicted result.
	eval(matrix);

	return 0;
}
