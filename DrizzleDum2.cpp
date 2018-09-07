//Drizzle Dum 2: The Goblin's Return

#include "stdafx.h"
#include "windows.h"
#include <conio.h>
#include <iostream>
#include <string>
#include <vector>
#include <random>

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
using namespace std;

random_device rng;
struct goblin {
	string name = "Not my Goblin";


	int ca = 11;
	int co = 15;

} Gob;

void wait_enter(void) //Method of wait_enter, call it to create a Press Enter to continue screen.
{
	cin.ignore();
	cout << "Press ENTER to continue...";
	cin.ignore();
}

int waitForKey()
{
	return _getch() - 48;
}

void swapColor()
{
	static bool accent = true;
	if (accent)
		SetConsoleTextAttribute(hConsole, Gob.ca);
	else
		SetConsoleTextAttribute(hConsole, Gob.co);
	accent = !accent;
}

void options() {
	system("cls");
	int colorc;
	int colorce;
	cout << "-*- Options -*-" << endl;
	cout << "\n1";
	cout << ") Change Console Color" << endl;
	cout << "2";
	cout << ") Change Accent Color" << endl;
	colorc = waitForKey();
	switch (colorc) {
	case 1:
		system("cls");
		cout << "-*- Console Color -*- \n\nWhat color do you want your console?\n\n1) White\n\n2) Yellow\n\n3) Green\n\n4) Red" << endl;
		colorc = waitForKey();
		switch (colorc) {
		case 1:
			Gob.co = 15;
			break;
		case 2:
			Gob.co = 14;
			break;
		case 3:
			Gob.co = 10;
			break;
		case 4:
			Gob.co = 12;
			break;
		}
	case 2:
		SetConsoleTextAttribute(hConsole, Gob.co);
		system("cls");
		cout << "-*- Accent Color -*-\n\nWhat is your choice/marker color?\n\n1) White\n\n2) Red\n\n3) Magenta\n\n4) Cyan\n\n5) Same as Console Color" << endl;
		colorc = waitForKey();
		switch (colorc) {
		case 1:
			Gob.ca = 15;
			break;
		case 2:
			Gob.ca = 12;
			break;
		case 3:
			Gob.ca = 13;
			break;
		case 4:
			Gob.ca = 11;
			break;
		case 5:
			Gob.ca = Gob.co;
			break;
		}
		break;
	}

}

void creation() {
	bool creationloop = true;
	string nameget;
	int temp1;
	int temp2;
		system("cls");
		cout << "-*- Goblin Creation I -*-\n\nWhat is your goblin's ";
		swapColor();
		cout << "name";
		swapColor();
		cout << "?" << endl;
		swapColor();
		getline(cin, nameget);
		while (creationloop == true) {
			system("cls");
			cout << "-*- Goblin Creation II -*-\n\n"


	}


}

void start() {
	int startint;
	bool startnice = true;
	swapColor();
	swapColor();
	while (startnice == true) {
		system("cls");
		cout << "DRIZZLE DUM 2 - THE GOBLINS RETURN\n\n";
		swapColor();
		cout << "1";
		swapColor();
		cout << ") Create a Goblin" << endl;
		swapColor();
		cout << "2";
		swapColor();
		cout << ") Load" << endl;
		swapColor();
		cout << "3";
		swapColor();
		cout << ") Options\n\nCurrent Version: ";
		swapColor();
		cout << "Pre - Alpha" << endl;
		swapColor();
		startint = waitForKey();
		switch (startint) {
		case 1:
			startnice = false;
			creation();
			break;
		case 3:
			options();
			break;
		}
	}
}




int main()
{
	start();
	return 0;
}

