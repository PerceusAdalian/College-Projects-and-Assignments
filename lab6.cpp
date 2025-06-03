///**
// * Created: 3/14/2025
// * Student: Perceus Willy
// * Class: CSC 131-A
// * Lab 6: Calculate Judge Scores
// **/

#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>
using namespace std;

double getJudgeData()
{
	double score;

	while (true) //Keep the program running until a valid score is received (5 scores max).
	{
		cout << "Enter score: ";
		cin >> score;
		if (cin.fail() || score < 0 || score > 10) //Score validation.
		{
			cout << "Invalid score. Valid scores must be between 0 and 10. Try again." << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max());
		}
		else
		{
			return score; //Return valid score.
		}
	}
}

double findLowest(const vector<double> &scores)
{
	return *min_element(scores.begin(), scores.end()); //Finds and returns the actual value.
}

double findHighest(const vector<double> &scores)
{
	return *max_element(scores.begin(), scores.end()); //Finds and returns the actual value.
}

void calcScores(vector<double> &scores)
{
	double minScore = findLowest(scores); //Find the lowest score out of input scores.
	double maxScore = findHighest(scores); //Find the highest score out of input scores.

	vector<double> finalScores; //Initialize final scores

	bool removedMin = false, removedMax = false;

	for (double score : scores) //Iterate through the scores to pop the min/max scores of each.
	{
		if (score == minScore && !removedMin) //Remove an instance of a min score, disallow further removal.
		{
			removedMin = true;
			continue;
		}
		if (score == maxScore && !removedMax) //Remove an instance of a max score, disallow further removal.
		{
			removedMax = true;
			continue;
		}

		finalScores.push_back(score); //Apply the remaining scores to the final scores.
	}

	double total = 0.0; //Initialize total

	for (double score : finalScores) //Sum all scores
	{
		total += score;
	}

	double averageScore = total / finalScores.size(); //Compute average
	cout << "Average is: " << averageScore << endl; //Print the average
}

int main()
{
	vector<double> scores(5);

	// Fill the array with 5 valid scores.
	for (int i = 0; i < 5; ++i)
	{
		scores[i] = getJudgeData();
	}

	calcScores(scores); //Finally, calculate and print the average of those scores. :)

	return 0;
}
