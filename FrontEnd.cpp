#include "FrontEnd.h"

#include <iostream>
#include <iomanip>
using namespace std;

void FrontEnd::displayInputMenu(BackEnd t_InBackEnd)
{
	genDecor('*', 34, true);
	genDecor('*', 10);
	cout << setprecision(2) << " Data Input ";
	genDecor('*', 12);
	cout << endl;
	
	cout << setprecision(2) << "Initial Investment Amount: ";
	if (t_InBackEnd.getInitialInvestmentAmt() > 0) {
		cout << "$" << t_InBackEnd.getInitialInvestmentAmt() << endl;
	}
	else {
		cout << endl;
	}
	cout << setprecision(2) << "Monthly Deposit: ";
	if (t_InBackEnd.getMonthlyDeposit() >= 0) {
		cout << "$" << t_InBackEnd.getMonthlyDeposit() << endl;
	}
	else {
		cout << endl;
	}
	cout << setprecision(2) << "Annual Interest: ";
	if (t_InBackEnd.getAnnualInterest() > 0) {
		cout << "%" << t_InBackEnd.getAnnualInterest() << endl;
	}
	else {
		cout << endl;
	}
	cout << "Number of years: ";
	if (t_InBackEnd.getNumberOfYears() > 0) {
		cout << t_InBackEnd.getNumberOfYears() << endl;
	}
	else {
		cout << endl;
	}
	genDecor('*', 34, true);
	cout << "1. Set Initial Investment Amount" << endl;
	cout << "2. Set Monthly Deposit" << endl;
	cout << "3. Set Annual Interest" << endl;
	cout << "4. Set Number of years" << endl;
	cout << "5. Exit Program" << endl;
}

void FrontEnd::displayReportMenu(BackEnd t_InBackEnd, bool t_HasMonthlyDeposit)
{
	genDecor('*', 65, true);
	if (t_HasMonthlyDeposit) {
		cout << setprecision(2);
		cout << '|' << right << setw(57) << "Balance and Interest With Additional Monthly Deposits" << right << setw(7) << '|' << endl;
		cout << '|';
		genDecor('=', 64, true);
		cout << '|' << right << setw(6) << "Year";
		cout << right << setw(24) << "Year End Balance";
		cout << right << setw(28) << "Year End Earned Interest" << right << setw(6) << '|' << endl;
		cout << '|';
		genDecor('-', 64, true);
		for (int i = 0; i < t_InBackEnd.getNumberOfYears(); ++i) {
			for (int j = 0; j < 12; ++j) {
				t_InBackEnd.calculation(i, j, t_InBackEnd.runningOpeningAmount, t_InBackEnd.getMonthlyDeposit(), t_InBackEnd.getAnnualInterest(),
					t_InBackEnd.runningInterestTotal, t_InBackEnd.runningClosingBalanceTotal);
			}
			cout << '|';
			cout << right << setw(6) << i + 1;
			cout << setw(9) << "$" << setw(15) << fixed << t_InBackEnd.runningClosingBalanceTotal;
			cout << setw(13) << "$" << setw(15) << fixed << t_InBackEnd.runningInterestTotal << setw(6) << '|' << endl;
		}
	}
	else {
		cout << setprecision(2);
		cout << '|' << right << setw(59) << "Balance and Interest Without Additional Monthly Deposits" << right << setw(5) << '|' << endl;
		cout << '|';
		genDecor('=', 64, true);
		cout << '|' << right << setw(6) << "Year";
		cout << right << setw(24) << "Year End Balance";
		cout << right << setw(28) << "Year End Earned Interest" << right << setw(6) << '|' << endl;
		cout << '|';
		genDecor('-', 64, true);
		for (int i = 0; i < t_InBackEnd.getNumberOfYears(); ++i) {
			for (int j = 0; j < 12; ++j) {
				t_InBackEnd.calculation(i, j, t_InBackEnd.runningOpeningAmount, 0.0f, t_InBackEnd.getAnnualInterest(),
					t_InBackEnd.runningInterestTotal, t_InBackEnd.runningClosingBalanceTotal);
			}
			cout << '|';
			cout << setw(6) << i + 1;
			cout << setw(9) << "$" << setw(15) << fixed << t_InBackEnd.runningClosingBalanceTotal;
			cout << setw(13) << "$" << setw(15) << fixed << t_InBackEnd.runningInterestTotal << setw(6) << '|' << endl;
		}
	}
	genDecor('*', 65, true);
}

void FrontEnd::clearScreen()
{
	cout << "\x1b[2J\x1b[H";
}

void FrontEnd::askContinue(BackEnd t_InBackEnd)
{
	cout << "Would you like to display different results? y or n: ";
	cin >> t_InBackEnd.inputCommand;
}

void FrontEnd::exit()
{
	genDecor('*', 34, true);
	cout << "Thank you for using Airgead Banking!" << endl;
}

void FrontEnd::genDecor(unsigned char t_DecoChar, unsigned int t_NumDeco, bool t_IsBorder)
{
	switch (t_DecoChar) {
	case '*':
		cout << setfill('*') << setw(t_NumDeco) << "";
		break;
	case '=':
		cout << setfill('=') << setw(t_NumDeco) << "|";
		break;
	case '-':
		cout << setfill('-') << setw(t_NumDeco) << "|";
		break;
	}

	if (t_IsBorder) {
		cout << endl;
	}
	cout << setfill(' ');
}
