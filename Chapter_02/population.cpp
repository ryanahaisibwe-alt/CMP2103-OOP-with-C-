// (Population projection) UBoS projects population based on the
// following assumptions:
// One birth every 7 seconds
// One death every 13 seconds
// One new immigrant every 45 seconds
// Write a program to display the population for each of the next five years. Assume the current population is 312032486 and one year has 365 days.

#include <iostream>
using namespace std;

int main()
{
    const int current_population = 312032486;
    const int seconds_per_year = 365 * 24 * 60 * 60; // Number of seconds in a year
    const int births_per_year = seconds_per_year / 7; // One birth every 7 seconds
    const int deaths_per_year = seconds_per_year / 13; // One death every 13 seconds
    const int immigrants_per_year = seconds_per_year / 45; // One new immigrant every 45 seconds

    int population = current_population;
    for (int i = 1; i <= 5; i++) {
        population += births_per_year - deaths_per_year + immigrants_per_year;
        cout << "Population after " << i << " year(s): " << population << endl;
    }

    return 0;
}