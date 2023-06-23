#include "FrontEnd.h"
#include "BackEnd.h"

#include <iostream>
using namespace std;

/*****************************************
* Name: Alex Schmierbach
* Date: June 2nd, 2023 : 3:04pm
* Purpose:
*	The purpose of this application is to showcase my ability to follow
*	requirments, specifications and best practices based upon information
*	given to me by the client.
* Notes:
*	I didn't give myself too much time to finish this program. Thus the
*	documentation is a bit lack luster and I was confused with the wording
*	inside of the guidlines and took awhile figuring out the needed calculations
*	needed for figuring out the interest.
*	Also, exit the program is a little function but will eventually exit the program
*	as intended it just takes a couple key presses.
*/

int main() {
	FrontEnd userInterface = FrontEnd(); // FrontEnd UI Object
	BackEnd investmentSystem = BackEnd(); // BackEnd Calculation Logic Object

	while (investmentSystem.inputCommand != 'n') {
		userInterface.displayInputMenu(investmentSystem);
		investmentSystem.readInput();
		if (investmentSystem.getInputCount() < 4) {
			userInterface.clearScreen();
		}
		else {
			investmentSystem.runningOpeningAmount = investmentSystem.getInitialInvestmentAmt();
			userInterface.displayReportMenu(investmentSystem, false);
			investmentSystem.runningOpeningAmount = investmentSystem.getInitialInvestmentAmt();
			userInterface.displayReportMenu(investmentSystem, true);
			userInterface.askContinue(investmentSystem);

			if (investmentSystem.inputCommand == 'y') {
				investmentSystem.reset();
				investmentSystem.resettInputCount();
				userInterface.clearScreen();
			}
		}
	}

	userInterface.exit();

	return 0;
}