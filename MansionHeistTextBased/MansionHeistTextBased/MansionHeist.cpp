#include <iostream>
#include <time.h>
#include <Windows.h>
#include <string>
#include <conio.h>
#include <algorithm>
using namespace std;

// Hey guys this is a test
//2nd pull

int dice();
int character();
int rooms();
int riddle();
int letters();




int main()
{
	
	int cont = 0;
	int cont2 = 0;
	int corr = 0;
	int final = 0;
	int Code1;
	int Code2;
	int Code3;
	int Code4;
	int Code5;
	int Code6;
	int Code7;
	int Code8;
	int Players;
	int i;
	string characters1;
	cout << "Enter how many players are playing out of 8" << endl;
	cin >> Players;
retry:
	for (i = 1; i <= Players; i++)
	{
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
		cout << "Your Roll Number is: " << Result << endl << endl;
	}


		if (cont > 0) {
			cout << "You enter the main lobby of the mansion, you see a note on the floor, which says read me!" << endl;
			cout << "The note reads: Welcome to Manson Hiest, where the only way to escape is to answer a bunch of riddles which reveal a secret word for you to use to escape!" << endl << "The catch is that you only have 1 minute to answer a riddle correctly! " << endl
				<< " May the odds be forever in your favor!" << endl;

		roo:
			if (final == 8) {
				cout << "After you finish your final riddle you head to the basement door" << endl << "The door has a keypad on it to enter the letters you have obtained in the correct order";
				cout << "What is the secret Code? Hint: There are 26 letters in the alphabet!" << endl;
				cin >> Code1 >> Code2 >> Code3 >> Code4 >> Code5 >> Code6 >> Code7 >> Code8;
				
			}
			else {


				cout << "You see several rooms ahead of you. You may choose which you would like to go in: " << endl << "1. Security Room" << endl << "2. Bathroom" << endl << "3. Kitchen" << endl << "4. Library" << endl << "5. Gym" << endl << "6. Stage" << endl << "7. Bedroom" << endl << "8. Greenhouse" << endl << endl;
				int room = rooms();
				cout << endl;
				if (room == 1) {
					cout << "You have chosen the secuity room." << endl;
					cont2++;
				}
				else if (room == 2) {
					cout << "You have chosen the bathroom." << endl;
					cont2++;
				}
				else if (room == 3) {
					cout << "You have chosen the kitchen." << endl;
					cont2++;
				}
				else if (room == 4) {
					cout << "You have chosen the library." << endl;
					cont2++;
				}
				else if (room == 5) {
					cout << "You have chosen the gym." << endl;
					cont2++;
				}
				else if (room == 6) {
					cout << "You have chosen the stage." << endl;
					cont2++;
				}
				else if (room == 7) {
					cout << "You have chosen the bedroom." << endl;
					cont2++;
				}
				else if (room == 8) {
					cout << "You have chosen the greenhouse." << endl;
					cont2++;
				}
				else {
					cout << "You have inputed an incorrect number. Please try again: " << endl;
					goto roo;
				}
			}
		}
	


		//int RandomRiddle = riddle();
		//cout << "Your Riddle is: " << RandomRiddle << endl;



		






		
		
		if (cont2 == 1) {
			string answer1;
				
	
			
			int random = riddle();
			if (random == 1)
			{
				cout << "What is a popular broadway show starring a historical figure from early U.S.history ? " << endl;
			q1:

				cout << endl;
				cin >> answer1;
				cout << endl;

				int timer = 10;
				while (timer > 0)
				{
					Sleep(1000);
					timer--;
					if (timer > 0) {

						if (_kbhit())
						{
							if (answer1 == "Hamilton")
							{
								int Scramble1 = letters();
								corr++;
								cout << "Your Number is: " << Scramble1 << endl;
								goto yort;


							}
							else
							{
								cout << "incorrect try again";
								goto q1;
							}
						}

					}

					if (timer == 0)
					{
						cout << "You lose! The door shuts and locks forever.";
					}
				}
				
				
			}
			else if (random == 2)
			{
				cout << "I have branches, but no fruit, trunk or leaves. What am I? " << endl;
			q2:
				cout << endl;
				cin >> answer1;
				cout << endl;

				int timer = 10;
				while (timer > 0)
				{
					Sleep(1000);
					timer--;
					if (timer > 0) {

						if (_kbhit()) {

							if (answer1 == "Bank") {

								int Scramble2 = letters();
								corr++;
								cout << "Your Number is: " << Scramble2 << endl;
								goto yort;


							}
							else {
								cout << "incorrect try again";
								goto q2;
							}
						}
					}


					if (timer == 0)
					{
						cout << "You lose! The door shuts and locks forever.";
					}
				}
				
			}
		
	

				else if (random == 3)
				{
					cout << "What has to be broken before you can use it? " << endl;
				q3:
					cout << endl;
					cin >> answer1;
					cout << endl;
					
					int timer = 10;
					while (timer > 0)
					{
						Sleep(1000);
						timer--;
						if (timer > 0) {

							if (_kbhit()) {

								if (answer1 == "Egg") {

									int Scramble3 = letters();
									corr++;
									cout << "Your Number is: " << Scramble3 << endl;
									goto yort;


								}
								else {
									cout << "incorrect try again";
									goto q3;
								}
							}
						}


						if (timer == 0)
						{
							cout << "You lose! The door shuts and locks forever.";
						}
					}
					
			}
				else if (random == 4)
				{
					cout << "What number comes next in this pattern; 2,4,8,16,32...? " << endl;
				q4:
					cout << endl;
					cin >> answer1;
					cout << endl;
					
					int timer = 10;
					while (timer > 0)
					{
						Sleep(1000);
						timer--;
						if (timer > 0) {

							if (_kbhit()) {

								if (answer1 == "64") {

									int Scramble4 = letters();
									corr++;
									cout << "Your Number is: " << Scramble4 << endl;
									goto yort;


								}
								else {
									cout << "incorrect try again";
									goto q4;

								}
							}
						}


						if (timer == 0)
						{
							cout << "You lose! The door shuts and locks forever.";
						}
					}
			}
				else if (random == 5)
				{
					cout << "What has one head, one foot and four legs " << endl;
				q5:
					cout << endl;
					cin >> answer1;
					cout << endl;
					
					int timer = 10;
					while (timer > 0)
					{
						Sleep(1000);
						timer--;
						if (timer > 0) {

							if (_kbhit()) {


								if (answer1 == "Bed") {

									int Scramble5 = letters();
									corr++;
									cout << "Your Number is: " << Scramble5 << endl;
									goto yort;


								}
								else {
									cout << "incorrect try again";
									goto q5;
								}
							}

						}

						if (timer == 0)
						{
							cout << "You lose! The door shuts and locks forever.";
						}
					}
			}
				else if (random == 6)
				{
					cout << "I have two hands, but I can not scratch myself. What am I? " << endl;
				q6:
					cout << endl;
					cin >> answer1;
					cout << endl;
					
					int timer = 10;
					while (timer > 0)
					{
						Sleep(1000);
						timer--;
						if (timer > 0) {

							if (_kbhit()) {

								if (answer1 == "Clock") {

									int Scramble6 = letters();
									corr++;
									cout << "Your Number is: " << Scramble6 << endl;
									goto yort;


								}
								else {
									cout << "incorrect try again";
									goto q6;
								}
							}
						}


						if (timer == 0)
						{
							cout << "You lose! The door shuts and locks forever.";
						}
					}
					
			}
				else if (random == 7)
				{
					cout << " I live in the jungle, my father was killed, I am to be king of the jungle one day, I sing I cant wait to be king. Who am I? " << endl;
				q7:
					cout << endl;
					cin >> answer1;
					cout << endl;
					
					int timer = 10;
					while (timer > 0)
					{
						Sleep(1000);
						timer--;
						if (timer > 0) {

							if (_kbhit()) {

								if (answer1 == "Simba") {

									int Scramble7 = letters();
									corr++;
									cout << "Your Number is: " << Scramble7 << endl;
									goto yort;


								}
								else {
									cout << "incorrect try again";
									goto q7;
								}
							}
						}


						if (timer == 0) {
							cout << "You lose! The door shuts and locks forever.";
						}
					}
					
			}
				else if (random == 8)
				{
					cout << "How do you make number 7 an even number without using subtraction, addition, multiplication or division? " << endl;
				q8:
					cout << endl;
					cin >> answer1;
					cout << endl;
					
					int timer = 10;
					while (timer > 0)
					{
						Sleep(1000);
						timer--;
						if (timer > 0) {

							if (_kbhit()) {

								if (answer1 == "S") {

									int Scramble8 = letters();
									corr++;
									cout << "Your Number is: " << Scramble8 << endl;
									goto yort;


								}
								else {
									cout << "incorrect try again";
									goto q8;
								}
							}
						}


						if (timer == 0) {
							cout << "You lose! The door shuts and locks forever.";
						}
					}
					
			}
				else if (random == 9)
				{
					cout << "What goes up and down but doesnt move? " << endl;
				q9:
					cout << endl;
					cin >> answer1;
					cout << endl;
					
					int timer = 10;
					while (timer > 0)
					{
						Sleep(1000);
						timer--;
						if (timer > 0) {

							if (_kbhit()) {

								if (answer1 == "Stairs") {

									int Scramble9 = letters();
									corr++;
									cout << "Your Number is: " << Scramble9 << endl;
									goto yort;


								}
								else {
									cout << "incorrect try again";
									goto q9;
								}
							}
						}


						if (timer == 0) {
							cout << "You lose! The door shuts and locks forever.";
						}
					}
					
			}
				else if (random == 10)
				{
					cout << "What has lots of eyes, but cant see? " << endl;
				q10:
					cout << endl;
					cin >> answer1;
					cout << endl;
					
					int timer = 10;
					while (timer > 0)
					{
						Sleep(1000);
						timer--;
						if (timer > 0) {

							if (_kbhit()) {

								if (answer1 == "Potatos") {

									int Scramble10 = letters();
									corr++;
									cout << "Your Number is: " << Scramble10 << endl;
									goto yort;


								}
								else {
									cout << "incorrect try again";
									goto q10;
								}
							}
						}


						if (timer == 0) {
							cout << "You lose! The door shuts and locks forever.";
						}
					}
					
			}
				else if (random == 11)
				{
					cout << "What has many teeth, but cant bite? " << endl;
				q11:
					cout << endl;
					cin >> answer1;
					cout << endl;
					
					int timer = 10;
					while (timer > 0)
					{
						Sleep(1000);
						timer--;
						if (timer > 0) {

							if (_kbhit()) {

								if (answer1 == "Comb") {

									int Scramble11 = letters();
									corr++;
									cout << "Your Number is: " << Scramble11 << endl;
									goto yort;


								}
								else {
									cout << "incorrect try again";
									goto q11;
								}
							}
						}


						if (timer == 0) {
							cout << "You lose! The door shuts and locks forever.";
						}
					}
					
			}


		}
	yort:
		
			if (corr == 1) {
				cout << "Congartulations!" <<endl << "The door opens and you enter the hallway which room do you go to next?" << endl;
				corr--;
				cont2--;
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
	
	

	int riddle()
	{

		srand(time(NULL));
		int RandomRiddle = 0;
		RandomRiddle = rand() % 11 + 1;
		return RandomRiddle;
		
	}
	int letters()
	{
		srand(time(NULL));
		
		
		int r = 0;
		char Scramble;
		Scramble = 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z';
		for (int i = 0; i < 26; i++)
		{
		
			Scramble = rand() % 26 + 1;
			return Scramble;
		}
		
		
	}
	
	