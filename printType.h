//--------------------------------------------------------------------------------------------------
//File Name:        printType.h
//Associated File:  printType.cpp
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



class printType
{
private:




public:

	
	// --------- Constructor ---------------
	//default constructor
	printType(void);




	// --------- Print Methods -------------
	void PrintProgramHeader(ofstream& fout);





	// --------- Destructor ----------------
	//default destructor 
	~printType(void);

};
