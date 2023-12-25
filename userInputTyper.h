//--------------------------------------------------------------------------------------------------
//File Name:        userInputType.h
//Associated File:  userInputType.cpp
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
#pragma once
#include "Standards.h"

class userInputType 
{

private:

	//user input for program
	int userSelection;


public:

	// --------- Constructor ---------------
	//default constructor
	userInputType(void);


	// --------- Get Methods ---------------
	int GetUserSelection(void) { return userSelection; }

	// --------- Set Methods ---------------
	void SetUserSelection(int newUserSelection) { userSelection = newUserSelection; }


	// --------- Other Methods ---------------
	void UserProgramSelection(ifstream& fin);




	// --------- Destructor ----------------
	//default destructor 
	~userInputType(void);


};
