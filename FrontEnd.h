#ifndef PROJECTTWO_FrontEnd_H_
#define PROJECTTWO_FrontEnd_H_

#include "BackEnd.h"

#include <string>

/*****************************************
* Name: Alex Schmierbach
* Date: June 4nd, 2023 : 3:04pm
* Purpose:
*	The purpose of this class is to handle user interface related logic.
*/

class FrontEnd
{
public:
	// Method to display input related UI
	void displayInputMenu(BackEnd t_InBackEnd);
	// Method to display investment report UI
	void displayReportMenu(BackEnd t_InBackEnd, bool t_HasMonthlyDeposit);
	// Helper function to clear console
	void clearScreen();
	// Helper function to ask the user to continue forward
	void askContinue(BackEnd t_InBackEnd);
	// Helper function to exit the program
	void exit();
private:
	// Helper function to generate UI table/input menu decoration
	void genDecor(unsigned char t_DecoChar, unsigned int t_NumDeco, bool t_IsBorder=false);
};

#endif // PROJECTTWO_FrontEnd_H_