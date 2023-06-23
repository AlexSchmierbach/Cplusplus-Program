#include "BackEnd.h"

/*****************************************
* Name: Alex Schmierbach
* Date: June 4nd, 2023 : 3:04pm
*/

BackEnd::BackEnd()
{
	m_InputCount = 0;
	inputCommand = 'e';

	runningOpeningAmount = 0.0f;
	runningInterestTotal = 0.0f;
	runningClosingBalanceTotal = 0.0f;

	m_InitialInvestmentAmt = -1.0f;
	m_InitialInvestmentAmt = -1.0f;
	m_InitialInvestmentAmt = -1.0f;
	m_InitialInvestmentAmt = 0;
}

void BackEnd::readInput()
{
	float tempFloat = 0.0;
	int tempInt = 0;

	cin >> inputCommand;

	switch (inputCommand) {
	case '1':
		cout << "Enter your initial investment amount: ";
		cin >> tempFloat;
		this->setInitialInvestmentAmt(tempFloat);
		incrementInputCount();
		break;
	case '2':
		cout << "Enter your monthly deposit amount: ";
		cin >> tempFloat;
		this->setMonthlyDeposit(tempFloat);
		incrementInputCount();
		break;
	case '3':
		cout << "Enter the annual interest rate: ";
		cin >> tempFloat;
		this->setAnnualInterest(tempFloat);
		incrementInputCount();
		break;
	case '4':
		cout << "Enter the amount of time in year(s): ";
		cin >> tempInt;
		this->setNumberOfYears(tempInt);
		incrementInputCount();
		break;
	case '5':
		inputCommand = 'n';
		break;
	default:
		cout << "Invalid command! Enter a valid command." << endl;
	}
}

void BackEnd::reset()
{
	m_InputCount = 0;
	inputCommand = 'e';

	runningOpeningAmount = 0.0f;
	runningInterestTotal = 0.0f;
	runningClosingBalanceTotal = 0.0f;

	m_InitialInvestmentAmt = -1.0f;
	m_MonthlyDeposit = -1.0f;
	m_AnnualInterest = -1.0f;
	m_NumberOfYears = 0;
}

void BackEnd::calculation(int t_InYearIteration, int t_InMonthInteration, double& t_InInitialAmt,
	double t_InDepositAmt, double t_InInterestRate, double& t_InRunningInterest, double& t_InRunningClosingBalance)
{
	if (t_InMonthInteration == 0) { t_InRunningInterest = 0.0f; }
	float Total = t_InInitialAmt + t_InDepositAmt;
	float Interest = (t_InInitialAmt + t_InDepositAmt) * ((t_InInterestRate / 100) / 12);
	float ClosingBalance = Total + Interest;

	t_InInitialAmt = ClosingBalance;
	t_InRunningInterest += Interest;
	t_InRunningClosingBalance = ClosingBalance;
}
