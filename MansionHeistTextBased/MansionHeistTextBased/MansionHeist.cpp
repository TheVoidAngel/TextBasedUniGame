#include <iostream>
#include <time.h>
#include <Windows.h>
using namespace std;

// Hey guys this is a test

int dice();
int character();
int rooms();
int riddle();

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
		
	
		//int Riddle1=1, Riddle2=2, Riddle3=3, Riddle4=4, Riddle5=5, Riddle6=6, Riddle7=7, Riddle8=8, Riddle9=9, Riddle10=10, Riddle11=11;
		int random = riddle();
		if (random == 1)
		{
			cout<<"What is a popular broadway show starring a historical figure from early U.S.history ? " << endl;
		}
		else if (random == 2)
		{
			cout << "I have branches, but no fruit, trunk or leaves. What am I? " << endl;
		}
		else if (random == 3)
		{
			cout << "What has to be broken before you can use it? " << endl;
		}
		else if (random == 4)
		{
			cout << "What number comes next in this pattern; 2,4,8,16,32...? " << endl;
		}
		else if (random == 5)
		{
			cout << "What has one head, one foot and four legs " << endl;
		}
		else if (random == 6)
		{
			cout << "I have two hands, but I can not scratch myself. What am I? " << endl;
		}
		else if (random == 7)
		{
			cout << " I live in the jungle, my father was killed, I am to be king of the jungle one day, I sing I can’t wait to be king. Who am I? " << endl;
		}
		else if (random == 8)
		{
			cout << "How do you make number 7 an even number without using subtraction, addition, multiplication or division? " << endl;
		}
		else if (random == 9)
		{
			cout << "What goes up and down but doesn’t move? " << endl;
		}
		else if (random == 10)
		{
			cout << "What has lots of eyes, but can’t see? " << endl;
		}
		else if (random == 11)
		{
			cout << "What has many teeth, but can’t bite? " << endl;
		}


		int RandomRiddle = riddle();
		cout << "Your Riddle is: " << RandomRiddle << endl;
		
			
		
		
	
		
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

		srand(time(NULL));
		int Riddle1, Riddle2, Riddle3, Riddle4, Riddle5, Riddle6, Riddle7, Riddle8, Riddle9, Riddle10, Riddle11;
		int RandomRiddle = 0;
		RandomRiddle = rand() % 11 + 1;
		return RandomRiddle;
		
	}
