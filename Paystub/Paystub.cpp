// Jonathan Vertiz
// ITSE 1307
// Formatted Paystub
// Paystub.cpp : Program that calculates your paystub after some deductions.

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;


int main()
{
	// Initialize the values we'll need
	double dblGrossAmount = 0.00;
	double dblNetSum = 0.00;
	double dblFederalTax = 0.00;
	double dblStateTax = 0.00;
	double dblSocialTax = 0.00;
	double dblMediTax = 0.00;
	double dblPension = 0.00;
	double dblHealth = 75.00;
	double dblDeduction = 0.00;
	string strFirstName = "John";
	string strLastName = "Smith";

	//Asks user to input their name and beginning values
	cout << "Enter first name: ";
	cin >> strFirstName;
	cout << "Enter last name: ";
	cin >> strLastName;
	cout << "Enter gross amount: ";
	cin >> dblGrossAmount;

	//Block of code that calculates what will be deduced
	dblFederalTax = dblGrossAmount * .15;
	dblSocialTax = dblGrossAmount * .0575;
	dblMediTax = dblGrossAmount * .0275;
	dblPension = dblGrossAmount * .005;
	dblDeduction = dblFederalTax + dblSocialTax
		+ dblMediTax + dblPension + dblStateTax + dblHealth;
	dblNetSum = dblGrossAmount - dblDeduction;

	//The output of the finished paystub
	cout << strFirstName << " " << strLastName << endl;
	cout << endl;
	cout << "Gross Amount: " << "............. $" << setprecision(2) << fixed << dblGrossAmount << endl;
	cout << "Federal Tax: " << "............... $" << dblFederalTax << endl;
	cout << "State Tax: " << "................... $" << dblStateTax << endl;
	cout << "Social Security: " << "........... $" << dblSocialTax << endl;
	cout << "Medicare/Medicaid Tax: " << "...... $" << dblMediTax << endl;
	cout << "Pension Plan: " << "............... $" << dblPension << endl;
	cout << "Health Insurance: " << "........... $" << dblHealth << endl;
	cout << "Net Amount: " << "............... $" << dblNetSum << endl;
    return 0;
}

