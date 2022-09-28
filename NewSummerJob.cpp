// Name: Don-Omar Cuebas
// Date: 9/12/22
// Program Title: New Summer Job Program
// Program Description: This program calculates a weekly wage based on an hourly payrate
// and deducts from the total pay based on categories of spending.

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Name constants
const double TAX = .15;

int main()
{
	// Declare variables
	string name;
	double payRate;
	double hours;
	double wages;
	double tax;
	double shopping;
	double shoppingPercent;
	double entertainment;
	double entertainmentPercent;
	double savings;
	double savingsPercent;
	double remainder;

	// State program title and description for the user
	cout << "Title: New Summer Job Program" << endl;
	cout << "Description : This program calculates a weekly wage based on an hourly payrateand deducts from the total pay based on categories of spending." << endl;
	cout << endl;

	// Allow user input
	cout << "What is your first and last name?" << endl;
	getline(cin, name);

	cout << "\nWhat is your hourly payrate in dollars?" << endl;
	cin >> payRate;

	cout << "\nHow many hours do you work per week?" << endl;
	cin >> hours;

	cout << "\nWhat percentage of your wages do you want to go to shopping expenses?" << endl;
	cin >> shoppingPercent;

	cout << "\nWhat percentage of your wages do you want to go to entertainment expenses?" << endl;
	cin >> entertainmentPercent;

	cout << "\nWhat percentage of your wages do you want to go to your savings?" << endl;
	cin >> savingsPercent;

	cout << endl;

	// Calculations
	wages = payRate * hours;
	tax = wages * TAX;
	shopping = wages * (shoppingPercent / 100);
	entertainment = wages * (entertainmentPercent / 100);
	savings = wages * (savingsPercent / 100);
	remainder = wages - (tax + shopping + entertainment + savings);

	// Output to screen
	system("cls");

	cout << fixed << showpoint << setprecision(2);

	cout << "Name:           " << name << endl;
	cout << "Wages:          $" << setw(7) << right << wages << endl;
	cout << "Taxes:          $" << setw(7) << right << tax << endl;
	cout << "Shopping:       $" << setw(7) << right << shopping << endl;
	cout << "Entertainment:  $" << setw(7) << right << entertainment << endl;
	cout << "Savings:        $" << setw(7) << right << savings << endl;
	cout << "Remainder:      $" << setw(7) << right << remainder << endl;

	return 0;
}