#ifndef PROJECTTWO_BackEnd_H_
#define PROJECTTWO_BackEnd_H_

#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*****************************************
* Name: Alex Schmierbach
* Date: June 4nd, 2023 : 3:04pm
* Purpose:
*	The purpose of this class is to handle calculation and other none user interface
*	related logic.
*/

class BackEnd
{
public:
	BackEnd(); // Constructor

	// Variable to store user input
	char inputCommand;

	// Declared variables needed in calculation
	double runningOpeningAmount;
	double runningInterestTotal;
	double runningClosingBalanceTotal;
	vector<double> previousYearInterestTotals;

	// Method that handle user input
	void readInput();
	// Just increases InputCount + 1
	void incrementInputCount() {
		m_InputCount++;
	}
	// Resets the private value for inputCount
	void resettInputCount() {
		m_InputCount = 0;
	}

	// Method that resets values back to base
	void reset();

	// Method that does calculation for montly investment values
	void calculation(int t_InYearIteration, int t_InMonthInteration, double& t_InInitialAmt,
		double t_InDepositAmt, double t_InInterestRate, double& t_InRunningInterest, double& t_InRunningClosingBalance);

	// Getters
	int getInputCount() { return m_InputCount; }
	float getInitialInvestmentAmt() { return m_InitialInvestmentAmt; }
	float getMonthlyDeposit() { return m_MonthlyDeposit; }
	float getAnnualInterest() { return m_AnnualInterest; }
	int getNumberOfYears() { return m_NumberOfYears; }

	// Setters
	void setInitialInvestmentAmt(float t_InInvestmentAmt) {
		m_InitialInvestmentAmt = t_InInvestmentAmt;
	}
	void setMonthlyDeposit(float t_InDepositAmt) {
		m_MonthlyDeposit = t_InDepositAmt;
	}
	void setAnnualInterest(float t_InInterestRate) {
		m_AnnualInterest = t_InInterestRate;
	}
	void setNumberOfYears(int t_InNumYears) {
		m_NumberOfYears = t_InNumYears;
	}
private:
	// Input helper variable
	int m_InputCount;

	// Input variables
	float m_InitialInvestmentAmt;
	float m_MonthlyDeposit;
	float m_AnnualInterest;
	unsigned int m_NumberOfYears;
};

#endif // PROJECTTWO_BackEnd_H_