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

#include "printType.h"


/*****************************************************************************************/
/* printType Default Constructor - 
******************************************************************************************/
printType::printType(void)
{

	//object creation counter
	static int counter = 0;

	//output counter
	cout << endl << "Print Object # " << ++counter << " created. " << endl << endl;

}

/*****************************************************************************************/
/* printType PrintProgramHeader -
******************************************************************************************/
void printType::PrintProgramHeader(ofstream& fout)
{

	fout << "Welcome to the Simple Calculator! " << endl;

	fout << "Select operation: " << endl;

	fout << left << "(1) " << right << setw(20) << "Addition " << endl;
	fout << left << "(2) " << right << setw(20) << "Subtraction " << endl;
	fout << left << "(3) " << right << setw(20) << "Multiplication " << endl;
	fout << left << "(4) " << right << setw(20) << "Division " << endl;
	fout << left << "(5) " << right << setw(20) << "Exponentiation " << endl;

}


/*****************************************************************************************/
/* printType Default Destructor -
******************************************************************************************/
printType::~printType(void)
{

	//object creation counter
	static int counter = 0;

	//output counter
	cout << endl << "Print Object # " << ++counter << " destroyed. " << endl << endl;

}

