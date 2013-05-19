/*
Chad Lewis
CSC 160-001
Hangman
Output sequential series of hangman phases
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	cout << "    -------|\n    |      |\n           |\n           |\n           |\n           |\n         _____"
	     << endl << endl << endl;

	cout << "    -------|\n    |      |\n    O      |\n           |\n           |\n           |\n         _____" 
			 << endl << endl << endl;

	cout << "    -------|\n    |      |\n    O      |\n    |      |\n           |\n           |\n         _____" 
			 << endl << endl << endl;

	cout << "    -------|\n    |      |\n    O      |\n   -|      |\n           |\n           |\n         _____"
			 << endl << endl << endl;

	cout << "    -------|\n    |      |\n    O      |\n   -|-     |\n           |\n           |\n         _____"
			 << endl << endl << endl;

	cout << "    -------|\n    |      |\n    O      |\n   -|-     |\n   /       |\n           |\n         _____" 
			 << endl << endl << endl;

	cout << "    -------|\n    |      |\n    O      |\n   -|-     |\n   / \\     |\n           |\n         _____"
			 << endl << endl << endl;

	return 0;
}
