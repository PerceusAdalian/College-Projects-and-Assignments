/*
 * Created: 1/28/2025
 * Student: Perceus Willy
 * Class: CSC 131-A
 * Homework 1 : Calculate the Interest Rate and other financial values via input parameters and then output their evaluations.
 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{

	//Base values
	double loanAmount;
	double annualInterestRate;
	double loanTerm;

	//Input fields
	cout << "What is the loan amount? ";
	cin >> loanAmount;
	cout << "What is the annual interest rate? ";
	cin >> annualInterestRate;
	cout << "What is the loan in term of years? ";
	cin >> loanTerm;

	//Calculated values
	double monthlyRate = (annualInterestRate / (100*12));
	double monthlyPayments = loanTerm * 12;
	//Actual Pain™
	double payment = ((monthlyRate * pow(1.0 + monthlyRate, monthlyPayments))/(pow(1.0 + monthlyRate, monthlyPayments) - 1.0)) * loanAmount;
	double totalPaid = payment*monthlyPayments;
	double interestPaid = totalPaid - loanAmount;

	//Evaluation/Output fields
	cout << left << setw(20) << "Monthly Payment:" << setw(1) << "$" << setw(15) << payment << endl;
	cout << left << setw(20) << "Total amount paid:" << setw(1) << "$" << setw(15) << totalPaid << endl;
	cout << left << setw(20) << "Interest paid:" << setw(1) << "$" << setw(15) << interestPaid << endl;

	return 0;
}
