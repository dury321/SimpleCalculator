// --------------------------------------------------------------------------------------------------------------------
//Programmer's Name:  Christian Dury
//Program:  SimpleCalculator
//Program Flow (IPO): 
//  Inputs:		
//	Outputs:	
//	Process:	
// --------------------------------------------------------------------------------------------------------------------

#include "Standards.h"
#include "printType.h"
#include "userInputTyper.h"



int main(void)
{
	//set precision to the output screen to 5 decimal places
	cout << fixed << setprecision(5);

	//create print object
	printType print;

	//create user input object
	userInputType userSelection;

	//print the program header to the screen
	print.PrintProgramHeader((ofstream&)cout);

	//get the user's selection for the program
	userSelection.UserProgramSelection((ifstream&)cin);

	

	

	return 0;
}