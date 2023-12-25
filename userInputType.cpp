//--------------------------------------------------------------------------------------------------
//File Name:        userInputType.cpp
//Associated File:  userInputType.h
//Contains:
//  Constructors:	Default:			
//	Members:			
//						
//  Access:
//   Get -	(inline)										
//			(defined in .cpp)			
//   Set -	(inline)					
//			(defined in .cpp)			
//   Print -(inline)					
//			(defined in .cpp)			
//								
// Other Methods:						
// Destructor: 
//					Default:			
//--------------------------------------------------------------------------------------------------
#include "userInputTyper.h"

/*****************************************************************************************/
/* userInputType Default Constructor -
******************************************************************************************/
userInputType::userInputType(void)
{
	//object creation counter
	static int counter = 0;

	//output counter
	cout << endl << "Print Object # " << ++counter << " created. " << endl << endl;

	//initialize user selection to 0
	userSelection = 0;
}

/*****************************************************************************************/
/* userInputType UserProgramSelection-
******************************************************************************************/
void userInputType::UserProgramSelection(ifstream& fin)
{
	//user selection variable
	int selection;

	//get input from user
	fin >> selection;

	//set the user's selection for the program
	SetUserSelection(selection);

}


/*****************************************************************************************/
/* userInputType Default Destructor-
******************************************************************************************/
userInputType::~userInputType(void)
{
	//object creation counter
	static int counter = 0;

	//output counter
	cout << endl << "Print Object # " << ++counter << " destroyed. " << endl << endl;
}