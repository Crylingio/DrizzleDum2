//Drizzle Dum 2: The Goblin's Return

//#include "stdafx.h"
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
    string race;

	int ca = 11;
	int co = 15;

	int str = 5;
    int con = 5;
	int wis = 5;
	int dex = 5;
	int crt = 1;

	double meleeprof = 1.00;
	double spellprof = 1.00;
	double critprof = 2.00;

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
		getline(cin, nameget);
		Gob.name = nameget;
		while (creationloop == true) {
			system("cls");
			cout << "-*- Goblin Creation II -*-\n" << endl;
			swapColor();
			cout << "1";
			swapColor();
			cout << ") Choose a Race" << endl;
			swapColor();
			cout << "2";
			swapColor();
			cout << ") Choose a Class" << endl;
			swapColor();
			cout << "3";
			swapColor();
			cout << ") Choose a Proficiency\n\n-*- Current Stats -*-\n\nName: ";
			swapColor();
			cout << Gob.name;
			swapColor();
			cout << "\nRace: ";
			swapColor();
			cout << Gob.race;
			swapColor();
			cout << "\n";
			temp1 = waitForKey();
            switch(temp1) {
            case 1:
                system("cls");
                cout << "-*- Goblin Creation - Races -*-\n" << endl;
                swapColor();
                cout << "1";
                swapColor();
                cout << ") Goblin\n    + ";
                swapColor();
                cout << "2";
                swapColor();
                cout << " Dexterity || - ";
                swapColor();
                cout << "1";
                swapColor();
                cout << " Constitution\n    Goblins are fast and sneaky creatures. They are proficient in stealth but they lack necessary defenses.\n" << endl;
                 swapColor();
                cout << "2";
                swapColor();
                cout << ") Half-Orc\n    + ";
                swapColor();
                cout << "2";
                swapColor();
                cout << " Constitution || + ";
                swapColor();
                cout << "1";
                swapColor();
                cout << " Strength || - ";
                swapColor();
                cout << "2";
                swapColor();
                cout << " Dexterity\n    Half-orcs are strong and dangerous-- however, they have a slower movement speed and dodge less due to this.\n" << endl;
                swapColor();
                cout << "3";
                swapColor();
                cout << ") Tornal\n    + ";
                swapColor();
                cout << "2";
                swapColor();
                cout << " Wisdom || + ";
                swapColor();
                cout << "1";
                swapColor();
                cout << " Dexterity || - ";
                swapColor();
                cout << "1 ";
                swapColor();
                cout << "Constitution \n   The Tornal were artificially created by mages to be apprentices. They are similar in size to a Goblin, however \n   they are much smarter.\n" << endl;
                temp2 = waitForKey();
                switch(temp2) {
                case 1:
                Gob.dex = 7;
                Gob.con = 4;
                Gob.race = "Goblin";
                break;
                case 2:
                Gob.con = 7;
                Gob.str = 6;
                Gob.dex = 3;
                Gob.race = "Half-Orc";
                break;
                case 3:
                Gob.wis = 7;
                Gob.dex = 6;
                Gob.con = 4;
                Gob.race = "Tornal";
                break;

                }
            break;
            case 2:
                system("cls");
                cout << "-*- Goblin Creation - Classes -*-\n" << endl;
                swapColor();
                cout << "1";
                swapColor();
                cout << ") ";
            break;
            case 3:

            break;
            }


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

