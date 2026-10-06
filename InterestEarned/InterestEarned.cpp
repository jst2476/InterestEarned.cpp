// This program calculates the final balance in a savings account after one year using compound interest.
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	cout << "0123456789012345678901234567890123456790123456789" << endl;
	cout << "\t\t\tSaving Balance After 1 Year of Compounding Interest!" << endl << endl;

	//Variables:

	cout << fixed << setprecision(2);

	double principalBalance, ratePercent, rateDecimal, finalAmount, interestEarned;
	int timesCompounded;

	//User Inputs:

	cout << "What is your initial balance? "; cin >> principalBalance; cout << endl;
	cout << "What is your current annual interest rate? "; cin >> ratePercent; cout << endl;
	cout << "How many times is interest compounded per year? "; cin >> timesCompounded; cout << endl;
	cout << endl;

	//Calculations:

	rateDecimal = ratePercent / 100;
	finalAmount = principalBalance * pow(1 + rateDecimal / timesCompounded, timesCompounded);
	interestEarned = finalAmount - principalBalance;


}