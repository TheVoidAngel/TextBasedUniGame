#include <iostream>
#include <time.h>
#include <Windows.h>
using namespace std;

// Hey guys this is a test

int dice();
int character();
int rooms();

int main()
	{
	int cont = 0;
		cout << "Choose your character: " << endl << "1. Hacker: Haze (H4Z3) - Kevin Hayes" << endl << "2. Plumber: Duce Harmon" << endl << "3. Chef : Charlotte Hunter" << endl << "4. Bookworm : Vivienne Gray" << endl << "5. Bodybuilder : Jack Brooks" << endl << "6. Actor : Sebastian Moltif" << endl << "7. Normal : Ave Jones" << endl << "8. Survivalist : Vex Helana" << endl << endl;
		int player1 = character();
		cout << endl;
		if (player1 == 1) {
			cout << "You have chosen Haze." << endl;
			cont++;
		}
		else if (player1 == 2) {
			cout << "You have chosen Duce." << endl;
			cont++;
		}
		else if (player1 == 3) {
			cout << "You have chosen Charlotte." << endl;
			cont++;
		}
		else if (player1 == 4) {
			cout << "You have chosen Vivienne." << endl;
			cont++;
		}
		else if (player1 == 5) {
			cout << "You have chosen Jack." << endl;
			cont++;
		}
		else if (player1 == 6) {
			cout << "You have chosen Sebastian." << endl;
			cont++;
		}
		else if (player1 == 7) {
			cout << "You have chosen Ave." << endl;
			cont++;
		}
		else if (player1 == 8) {
			cout << "You have chosen Vex." << endl;
			cont++;
		}
		else {
			cout << "You have inputed an incorrect number. Please try again: " << endl;
			//int player1 = character();
		}

		int Result = dice();
		cout << "Your Number is: " << Result << endl;

		if (cont == 1) {
			cout << "You enter the main lobby of the mansion, you see a note on the floor, which says read me!" << endl;
			cout << "The note reads: Welcome to Manson Hiest, where the only way to escape is to answer a bunch of riddles which reveal a secret word for you to use to escape!"
				<< " May the odds be forever in your favor!" << endl;
			cout << "You see several rooms ahead of you. You may choose which you would like to go in: " << endl << "1. Security Room" << endl << "2. Bathroom" << endl << "3. Kitchen" << endl << "4. Library" << endl << "5. Gym" << endl << "6. Stage" << endl << "7. Bedroom" << endl << "8. Greenhouse" << endl << endl;
			int room = rooms();
			cout << endl;
			if (room == 1) {
				cout << "You have chosen the secuity room." << endl;
				cont++;
			}
			else if (room == 2) {
				cout << "You have chosen the bathroom." << endl;
				cont++;
			}
			else if (room == 3) {
				cout << "You have chosen the kitchen." << endl;
				cont++;
			}
			else if (room == 4) {
				cout << "You have chosen the library." << endl;
				cont++;
			}
			else if (room == 5) {
				cout << "You have chosen the gym." << endl;
				cont++;
			}
			else if (room == 6) {
				cout << "You have chosen the stage." << endl;
				cont++;
			}
			else if (room == 7) {
				cout << "You have chosen the bedroom." << endl;
				cont++;
			}
			else if (room == 8) {
				cout << "You have chosen the greenhouse." << endl;
				cont++;
			}
			else {
				cout << "You have inputed an incorrect number. Please try again: " << endl;
				//int player1 = character();
			}
		}

		cout << "You have 10 minutes to escape (600 seconds)! " << endl;
		
	
		
			
		
		
	
		
	}

	int character() {
		int player1;
		cin >> player1;
		return player1;
	}

	int rooms() {
		int room;
		cin >> room;
		return room;
	}

int dice()
	{
	srand(time(NULL));
	int Dice;
	int Result = 0;
	Result = rand() % 6 + 1;
		return Result;	
	}

	int timer()
	{
		int Timer = 600;
		while (Timer > 0)
		{
			Sleep(1000);
			Timer--;
		}
		return 0;
	}

	int riddle()
	{
		return 0;
	}
