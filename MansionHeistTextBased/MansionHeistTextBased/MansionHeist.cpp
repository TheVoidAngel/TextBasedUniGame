#include <iostream>
#include <time.h>
#include <Windows.h>
using namespace std;

// Hey guys this is a test
//2nd pull

int dice();
int character();
int rooms();
int riddle();
int timer();
int timer2();




int main()
{
	int cont = 0;
	int corr = 0;
	int final = 0;
	string characters1;
retry:
	cout << "Choose your character: " << endl << "1. Hacker: Haze (H4Z3) - Kevin Hayes" << endl << "2. Plumber: Duce Harmon" << endl << "3. Chef : Charlotte Hunter" << endl << "4. Bookworm : Vivienne Gray" << endl << "5. Bodybuilder : Jack Brooks" << endl << "6. Actor : Sebastian Moltif" << endl << "7. Normal : Ave Jones" << endl << "8. Survivalist : Vex Helana" << endl << endl;
	int player1 = character();
	cout << endl;
	if (player1 == 1) {
		cout << "You have chosen Haze." << endl << endl;
		characters1 = "Haze";
		cont++;
	}
	else if (player1 == 2) {
		cout << "You have chosen Duce." << endl << endl;
		characters1 = "Duce";
		cont++;
	}
	else if (player1 == 3) {
		cout << "You have chosen Charlotte." << endl << endl;
		characters1 = "Charlotte";
		cont++;
	}
	else if (player1 == 4) {
		cout << "You have chosen Vivienne." << endl << endl;
		characters1 = "Vivienne";
		cont++;
	}
	else if (player1 == 5) {
		cout << "You have chosen Jack." << endl << endl;
		characters1 = "Jack";
		cont++;
	}
	else if (player1 == 6) {
		cout << "You have chosen Sebastian." << endl << endl;
		characters1 = "Sebastian";
		cont++;
	}
	else if (player1 == 7) {
		cout << "You have chosen Ave." << endl << endl;
		characters1 = "Ave";
		cont++;
	}
	else if (player1 == 8) {
		cout << "You have chosen Vex." << endl << endl;
		characters1 = "Vex";
		cont++;
	}
	else {
		cout << "You have inputed an incorrect number. Please try again: " << endl;
		goto retry;
	}

	int Result = dice();
	cout << "Your Number is: " << Result << endl << endl;

	if (cont == 1) {
		cout << "You enter the main lobby of the mansion, you see a note on the floor, which says read me!" << endl;
		cout << "The note reads: Welcome to Manson Hiest, where the only way to escape is to answer a bunch of riddles which reveal a secret word for you to use to escape!" << endl << "The catch is that you only have 1 minute to answer a riddle correctly! " << endl
			<< " May the odds be forever in your favor!" << endl;

	roo:
		if (final == 8) {
			cout << "After you finish your final riddle you head to the basement door" << endl << "The door has a keypad on it to enter the letters you have obtained in the correct order";

		}
		else {


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
				goto roo;
			}
		}
	}


		//int RandomRiddle = riddle();
		//cout << "Your Riddle is: " << RandomRiddle << endl;



		












		
		
		if (cont == 2) {
			string answer1;
				
	
			
			int random = riddle();
			if (random == 1)
			{
				cout << "What is a popular broadway show starring a historical figure from early U.S.history ? " << endl;
			q1:
				
				cout << endl;
				cin >> answer1;
				cout << endl;
				int lose = timer();
				if (lose > 0) {
					
					
					if (answer1 == "Hamilton") {
						
						corr++;
						goto yort;
						
						
					}
					else {
						cout << "incorrect try again";
						goto q1;
					}
				}
				else {
					cout << "You lose! The door shuts and locks forever.";
				}
			}
			else if (random == 2)
			{
				cout << "I have branches, but no fruit, trunk or leaves. What am I? " << endl;
			q2:
				cout << endl;
				int lose = timer();
				cout << endl;
				if (lose > 0) {
					cin >> answer1;
					cout << endl;
					if (answer1 == "Bank") {
						corr++;
					}
					else {
						cout << "incorrect try again";
						goto q2;
					}
				}
				
				else {
					cout << "You lose! The door shuts and locks forever.";
				}
			}
		
	

				else if (random == 3)
				{
					cout << "What has to be broken before you can use it? " << endl;
				q3:
					cout << endl;
					cin >> answer1;
					cout << endl;
					if (answer1 == "Egg") {
						corr++;
					}
					else {
						cout << "incorrect try again";
						goto q3;
					}
				}
				else if (random == 4)
				{
					cout << "What number comes next in this pattern; 2,4,8,16,32...? " << endl;
				q4:
					cout << endl;
					cin >> answer1;
					cout << endl;
					if (answer1 == "64") {
						corr++;
					}
					else {
						cout << "incorrect try again";
						goto q4;
					}
				}
				else if (random == 5)
				{
					cout << "What has one head, one foot and four legs " << endl;
				q5:
					cout << endl;
					cin >> answer1;
					cout << endl;
					if (answer1 == "Bed") {
						corr++;
					}
					else {
						cout << "incorrect try again";
						goto q5;
					}
				}
				else if (random == 6)
				{
					cout << "I have two hands, but I can not scratch myself. What am I? " << endl;
				q6:
					cout << endl;
					cin >> answer1;
					cout << endl;
					if (answer1 == "Clock") {
						corr++;
					}
					else {
						cout << "incorrect try again";
						goto q6;
					}
				}
				else if (random == 7)
				{
					cout << " I live in the jungle, my father was killed, I am to be king of the jungle one day, I sing I cant wait to be king. Who am I? " << endl;
				q7:
					cout << endl;
					cin >> answer1;
					cout << endl;
					if (answer1 == "Simba") {
						corr++;
					}
					else {
						cout << "incorrect try again";
						goto q7;
					}
				}
				else if (random == 8)
				{
					cout << "How do you make number 7 an even number without using subtraction, addition, multiplication or division? " << endl;
				q8:
					cout << endl;
					cin >> answer1;
					cout << endl;
					if (answer1 == "S") {
						corr++;
					}
					else {
						cout << "incorrect try again";
						goto q8;
					}
				}
				else if (random == 9)
				{
					cout << "What goes up and down but doesnt move? " << endl;
				q9:
					cout << endl;
					cin >> answer1;
					cout << endl;
					if (answer1 == "Stairs") {
						corr++;
					}
					else {
						cout << "incorrect try again";
						goto q9;
					}
				}
				else if (random == 10)
				{
					cout << "What has lots of eyes, but cant see? " << endl;
				q10:
					cout << endl;
					cin >> answer1;
					cout << endl;
					if (answer1 == "Potatos") {
						corr++;
					}
					else {
						cout << "incorrect try again";
						goto q10;
					}
				}
				else if (random == 11)
				{
					cout << "What has many teeth, but cant bite? " << endl;
				q11:
					cout << endl;
					cin >> answer1;
					cout << endl;
					if (answer1 == "Comb") {
						corr++;
					}
					else {
						cout << "incorrect try again";
						goto q11;
					}
				}


			}
			yort:
			if (corr == 1) {
				cout << "Congartulations! you have solved this riddle your letter is: " << endl << "The door opens and you enter the hallway which room do you go to next?" << endl;
				corr--;
				cont--;
				final++;
				goto roo;
			}

			
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
		int Timer = 10;
		while (Timer > 0)
		{
			Sleep(1000);
			Timer--;
		}
		return Timer;
	}
	int timer2()
	{
		int Timer2 = 1;
		while (Timer2 > 0)
		{
			Sleep(1000);
			Timer2--;
		}
		return Timer2;
	}
	

	int riddle()
	{

		srand(time(NULL));
		//int Riddle1, Riddle2, Riddle3, Riddle4, Riddle5, Riddle6, Riddle7, Riddle8, Riddle9, Riddle10, Riddle11;
		int RandomRiddle = 0;
		RandomRiddle = rand() % 11 + 1;
		return RandomRiddle;
		
	}
