/*
Chad Lewis
CSC 160-001
02.17.2013
Hangman+ 
Define hangman board as string literal, display first board. 
Display word from wordbank .dat file, prompt for a lowercase character guess. 
Convert input to CAP and display. 
Display remaining boards.
*/

#include <iostream>	// std i/o
#include <string>	// strings
#include <sstream>	// stringstream
#include <fstream>	// istream/ostream
#include <cctype>	// toupper()

using namespace std;

int main()
{
	// DECLERATIONS

	char guess;
	string word;
	string board1 = 
	"    -------|\n" 
	"    |      |\n" 
	"           |\n" 
	"           |\n" 
	"           |\n" 
	"           |\n" 
	"         _____\n"; 

	string board2 = 
	"    -------|\n"
	"    |      |\n"
	"    O      |\n"
	"           |\n"
	"           |\n"
	"           |\n"
	"         _____\n";

	string board3 = 
	"    -------|\n"
	"    |      |\n"
	"    O      |\n"
	"    |      |\n"
	"           |\n"
	"           |\n"
	"         _____\n";

	string board4 = 
	"    -------|\n" 
	"    |      |\n" 
	"    O      |\n" 
	"   -|      |\n" 
	"           |\n"
	"           |\n"
	"         _____\n";
	
	string board5 =
	"    -------|\n"
	"    |      |\n"
	"    O      |\n"
	"   -|-     |\n"
	"           |\n"
	"           |\n"
	"         _____\n";

	string board6 = 
	"    -------|\n"
	"    |      |\n"
	"    O      |\n"
	"   -|-     |\n"
	"   /       |\n"
	"           |\n"
	"         _____\n";
	
	string board7 = 
	"    -------|\n"
	"    |      |\n"
	"    O      |\n"
	"   -|-     |\n"
	"   / \\     |\n"
	"           |\n"
	"         _____\n";

	// OUTPUT/INPUT

	// display starting board
	cout << board1 << endl;										// output

	// open wordbank file and extract first word
	ifstream inFile ("hangman.dat");							// input
	inFile >> word;

	// display extracted word
	cout << "\nThe word is " << word << endl;					// output
	inFile.close();		// close file like a good progger

	// receive and store a single character guess
	cout << "\nPlease enter a single character: ";	// output
	cin  >> guess;									// input
	
	while (isupper(guess))
		{
			cout << "You entered an uppercase character, please insert a lowercase character: ";
			cin  >> guess;
		}
			
	// display guess as uppercase using toupper() function
	guess = toupper(guess);
	cout << "\nYour guess is " << guess;						// output
	cout << endl << endl;										
	system("pause");

	// display remaining boards
	cout << board2 << endl										// output
		 << board3 << endl
		 << board4 << endl
		 << board5 << endl
		 << board6 << endl
		 << board7 << endl;
	
	system("pause");
	return 0;
}