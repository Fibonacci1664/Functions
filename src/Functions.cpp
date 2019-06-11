/*
 * Functions.cpp
 *
 *  Created on: 11 Jun 2019
 *      Author: Dave
 */

#include<iostream>

using namespace std;

void showMenu()
{
	cout << "1. Search" << endl;
	cout << "2. View Record" << endl;
	cout << "3. Quit" << endl;
}

void getInput()
{
	cout << "Please choose an option:> " << flush;

	int input;
	cin >> input;

	switch(input)
	{
	case 1:
		cout << "Searching..." << endl;
		break;
	case 2:
		cout << "Viewing..." << endl;
		break;
	case 3:
		cout << "Quitting..." << endl;
		break;
	default:
		cout << "Oops, something went wrong!" << endl;
	}
}

int main()
{
	showMenu();
	getInput();

	return 0;
}


