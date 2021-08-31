/*
Caleb Hemmestad
C++ 2021
Due: Sep 15 by 11:59pm
Lab number 2 Exploring Output
Print out class schedule  for the week and a 4 by 4 star grid
 */

#include <iostream>

using namespace std ;

int main(int argc, char **argv)
{
	// Creating a variable to store the day of the week
	string D ;
	
	// Creating variables to store classes to avoid having to retype them
	string C1 = "Calculus 1 - 210" ;
	string C2 = "C++ - 162" ;
	string C3 = "Composition 1 - 105" ;
	string C4 = "Composition 1 Lab - 067" ;
	string C5 = "Intro to Psychology - 111" ;
	string C6 = "The College Experience - 108" ;
	
	// Creating variables to store the times of classes to avoid having to retype them
	string T1 = "8:00" ;
	string T2 = "10:00" ;
	string T3 = "12:00" ;
	string T4 = "2:00" ;
	
	// Changing the variable to the correct day of the week
	D = "Monday\t" ;
	// Displaying schedule for Monday
	cout << D + "\t" + T1 + "\t" + C1 << endl ;
	cout << D + "\t" + T2 + "\t" + C2 << endl ;
	cout << D + "\t" + T3 + "\t" + C3 << endl ;
	cout << D + "\t" + T4 + "\t" + C5 << endl ;
	
	// Changing the variable to the correct day of the week
	D = "Tuesday\t" ;
	// Displaying schedule for Tuesday
	cout << D + "\t" + T1 + "\t" + C1 << endl ;
	cout << D + "\t" + T2 + "\t" + C2 << endl ;
	cout << D + "\t" + T3 + "\t" + C4 << endl ;
	
	// Changing the variable to the correct day of the week
	D = "Wednesday" ;
	// Displaying schedule for Wednesday
	cout << D + "\t" + T1 + "\t" + C1 << endl ;
	cout << D + "\t" + T2 + "\t" + C2 << endl ;
	cout << D + "\t" + T3 + "\t" + C3 << endl ;
	cout << D + "\t" + T4 + "\t" + C5 << endl ;

	// Changing the variable to the correct day of the week
	D = "Thursday" ;
	// Displaying schedule for Thursday
	cout << D + "\t" + T1 + "\t" + C1 << endl ;
	cout << D + "\t" + T2 + "\t" + C2 << endl ;
	cout << D + "\t" + T3 + "\t" + C4 << endl ;
	
	// Changing the variable to the correct day of the week
	D = "Friday\t" ;
	// Displaying schedule for Friday
	cout << D + "\t" + T1 + "\t" + C6 << endl ;
	cout << D + "\t" + T2 + "\t" + C2 << endl ;
	cout << D + "\t" + T3 + "\t" + C5 << endl ;
	
	// Creating variables to store string of characters to avoid having to type over and over
	string CheckerBoard1 = "\n    *        *        *        *    \n" ;
	string CheckerBoard2 = "\n*       *        *        *         \n" ;
	
	
	// Displaying stars in a checkered pattern
	cout << CheckerBoard1 ;
	cout << CheckerBoard2 ;
	cout << CheckerBoard1 ;
	cout << CheckerBoard2 ;
	cout << CheckerBoard1 ;
	cout << CheckerBoard2 ;
	cout << CheckerBoard1 ;
	cout << CheckerBoard2 ;
	
	return 0;
}

