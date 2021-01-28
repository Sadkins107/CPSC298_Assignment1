//Includes the i/o stream to retrieve values and output them
#include <iostream>
#include <iomanip>

using namespace std;

int main (int argc, char **argv) {
	//Declares all variables needed
	const double payRate = 16.00;
	const double overtimeThreshold = 40.0;
	const double overtimeRate = 24.00;
	const double socialSecurity = 0.06;
	const double fedIncome = 0.14;
	const double stateIncome = 0.05;
	const double insurancePay = 10.00;
	double hoursWorked;
	double grossPay;
	double socialPay;
	double fedPay;
	double statePay;
	double netPay;

	//Retrieve the number of hours worked in the week
	cout << "How many hours did you work this week?" << endl;
	cin >> hoursWorked;

	//Calculates gross pay for the week
	if (hoursWorked <= overtimeThreshold) {
		grossPay = hoursWorked * payRate;
	} else {
		grossPay = (overtimeThreshold * payRate);
		grossPay += (hoursWorked - overtimeThreshold) * overtimeRate;
	}

	//Calculates the taxes taken out
	socialPay = grossPay * socialSecurity;
	fedPay = grossPay * fedIncome;
	statePay = grossPay * stateIncome;

	//Calculates the net pay left
	netPay = grossPay - (socialPay + fedPay + statePay + insurancePay);

	//Prints the values to the console
	cout << "Gross Pay: $" << fixed << setprecision (2) << grossPay << endl;
	cout << "Social Security Payment: $" << fixed << setprecision (2) << socialPay << endl;
	cout << "Federal Income Tax Payment: $"  << fixed << setprecision (2) << fedPay << endl;
	cout << "State Income Tax Payment: $"  << fixed << setprecision (2) << statePay << endl;
	cout << "Insurance Payment: $"  << fixed << setprecision (2) << insurancePay << endl;
	cout << "Net Pay: $"  << fixed << setprecision (2) << netPay << endl;

	return 0;
}
