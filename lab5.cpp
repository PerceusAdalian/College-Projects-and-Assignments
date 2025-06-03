///*
//    Student: Perceus Willy
//    Class: CSC131
//    Assignment: Lab 6, Calculating Population Over Time
//*/


#include <iostream>
#include <iomanip>
using namespace std;

double asPercent(double percent)
{
    return percent / 100.0;
}

double calcPopulation(double iPop, double birthRate, double deathRate)
{
    double birth = asPercent(birthRate) * iPop;
    double death = asPercent(deathRate) * iPop;
    return (iPop + birth - death);
}

void calcPopulationOverTime(int countYears, double iPop, double birthRate, double deathRate)
{
    double populationIntegral[countYears] = {};
    cout << "After year" << setw(15) << "Population" << endl;
    for (int i = 0; i < countYears ; i++)
    {
        double pop = iPop;
        if (i > 0)
        {
            pop = populationIntegral[i-1];
        }
        populationIntegral[i] = calcPopulation(pop, birthRate, deathRate);
        cout << i+1 << setw(15) << populationIntegral[i] << "\n";
    }
}

int main()
{
    while (true)
    {
        double population, birthRate, deathRate;
        int countYears;
        cout << "Enter population start size: ";
        cin >> population;
        if (population <= 2)
        {
            cout << "Invalid input. Was expecting an int >= 2.0. Try again." << endl;
            continue;
        }
//        cin.clear();
        cout << "Enter annual birth rate: ";
        cin >> birthRate;
        if (birthRate < 0)
        {
            cout << "Invalid input. Was expecting a positive number. Try again." << endl;
            continue;
        }
        cout << "Birth rate is: " << asPercent(birthRate) << endl;
//        cin.clear();
        cout << "Enter annual death rate: ";
        cin >> deathRate;
        if (deathRate < 0)
        {
            cout << "Invalid input. Was expecting a positive number. Try again." << endl;
            continue;
        }
        cout << "Death rate is: " << asPercent(deathRate) << endl;
//        cin.clear();
        cout << "Enter number of years: ";
        cin >> countYears;
        if (countYears <= 1)
        {
            cout << "Invalid input. Was expecting a number greater than 1. Try again." << endl;
            continue;
        }

        calcPopulationOverTime(countYears, population, birthRate, deathRate);
        return true;
    }
    return 0;
}
