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
//int riddle();
int letters();




int main()
{
	srand(time(NULL));
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

	int random1 = 0;
	int random2 = 0;
	int random3 = 0;
	int random4 = 0;
	int random5 = 0;
	int random6 = 0;
	int random7 = 0;
	int random8 = 0;

	int Scramble1 = letters();
	int Scramble2 = letters();
	int Scramble3 = letters();
	int Scramble4 = letters();
	int Scramble5 = letters();
	int Scramble6 = letters();
	int Scramble7 = letters();
	int Scramble8 = letters();

	int Players;
	int i;
	string characters1;
	cout << "Enter how many players are playing out of 8" << endl;
replay:
	cin >> Players;
	if (Players < 8) {
		goto retry;
	}
	else {
		cout << "Incorrect amout of players please input a number between 1 and 8" << endl;
			goto replay;
	}
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
		cout << "Your Roll Number is: " << Result << endl << "This roll determines the order in which each player will have the final say on each question from highest to lowest." << endl << endl;
	}


	if (cont > 0) {

		{
	cout << "                         |                             " << endl;
	cout << "_________________________|_____________________      " << endl;
	cout << "_________________________|_____________________       " << endl;
	cout << " | | | | | | | | | | | | | | | | | | | | |  | |            " << endl;
	cout << " | | | | | | | | | | | | | | | | | | | | |  | |           " << endl;
	cout << " | | | | | | | | | | ____|_____| | | | | |  | |           " << endl;
	cout << "_|_|_|_|_|_|_|_|_|__{          }___|_|_|_|__|_|_______" << endl;
	cout << " |  _________________{        }_____________  |_|____|" << endl;
	cout << " | |                  {______}             ||_|_____|" << endl;
	cout << " | |  _                                  | ||_____| " << endl;
	cout << " | | | }_                             |  |_|____|   " << endl;
	cout << " | | |___|                          | | _|_____|    " << endl;
	cout << " | |                             |  | ||______|     " << endl;
	cout << "      { }                     |  | _||_______|      " << endl;
	cout << "  _____|_____           O  |  | _||__________| | o  " << endl;
	cout << " |__________|           |  | _||_____________||| | " << endl;
	cout << " |          |    __     | _||_________________||_| " << endl;
	cout << " |          |   /_/     ||______________________|| " << endl;

}    
		cout << "You enter the main lobby of the mansion, you see a note on the floor, which says read me!" << endl;
		cout << "The note reads: Welcome to Manson Hiest, where the only way to escape is to answer a bunch of riddles which reveal a secret word for you to use to escape!" << endl << "The catch is that you only have 20 seconds to answer a riddle correctly! " << endl
			<< "May the odds be forever in your favor!" << endl;

	roo:
		if (final == 8) {

			cout << "After you finish your final riddle you head to the basement door" << endl << "The door has a keypad on it to enter the numbers you have obtained in the correct order" << endl;
			{
				cout << "      ____________________        " << endl;
				cout << "      |     ________     |         " << endl;
				cout << "      |     |      |     |         " << endl;
				cout << "      |     |______|     |         " << endl;
				cout << "      |                  |         " << endl;
				cout << "      |             __ __|         " << endl;
				cout << "      |             |_|_||         " << endl;
				cout << "      |             |_|_||         " << endl;
				cout << "      |             |_|_||         " << endl;
				cout << "      |                  |         " << endl;
				cout << "      |                  |         " << endl;
				cout << "      |__________________|         " << endl;
				cout << "      |__________________|         " << endl;




			}
			cout << "What is the secret Code? Hint: the numbers you got after solving each riddle." << endl << "You must enter each number seperatly" << endl;
			{
				cout << " __________________        " << endl;
				cout << " | oo |           |         " << endl;
				cout << " | oo | - - - - - |        " << endl;
				cout << " | oo |___________|         " << endl;
				cout << " |    |_1_|_2_|_3_|         " << endl;
				cout << " |    |_4_|_5_|_6_|         " << endl;
				cout << " |    |_7_|_8_|_9_|         " << endl;
				cout << " |____|_*_|_0_|_#_|         " << endl;


			}
			cin >> Code1 >> Code2 >> Code3 >> Code4 >> Code5 >> Code6 >> Code7 >> Code8;
			//int Scramble1 = letters();
			cout << Scramble1;
			if (Code1 == Scramble1)
			{
				cout << "The first letter is correct!" << endl;
			}
			else
			{
				cout << "The first letter is incorrect!" << endl;
			}
			//int Scramble2 = letters();
			if (Code2 == Scramble2)
			{
				cout << "The second letter is correct!" << endl;
			}
			else
			{
				cout << "The second letter is incorrect!" << endl;
			}
			//int Scramble3 = letters();
			if (Code3 == Scramble3)
			{
				cout << "The third letter is correct!" << endl;
			}
			else
			{
				cout << "The third letter is incorrect!" << endl;
			}
			//int Scramble4 = letters();
			if (Code4 == Scramble4)
			{
				cout << "The fourth letter is correct!" << endl;
			}
			else
			{
				cout << "The fourth letter is incorrect!" << endl;
			}
			//int Scramble5 = letters();
			if (Code5 == Scramble5)
			{
				cout << "The fifth letter is correct!" << endl;
			}
			else
			{
				cout << "The fifth letter is incorrect!" << endl;
			}
			//int Scramble6 = letters();
			if (Code6 == Scramble6)
			{
				cout << "The sixth letter is correct!" << endl;
			}
			else
			{
				cout << "The sixth letter is incorrect!" << endl;
			}
			//int Scramble7 = letters();
			if (Code7 == Scramble7)
			{
				cout << "The seventh letter is correct!" << endl;
			}
			else
			{
				cout << "The seventh letter is incorrect!" << endl;
			}
			//int Scramble8 = letters();
			if (Code8 == Scramble8)
			{
				cout << "The eighth letter is correct!" << endl;
			}
			else
			{
				cout << "The eighth letter is incorrect!" << endl;
			}

			if (Code1 == Scramble1 && Code2 == Scramble2 && Code3 == Scramble3 && Code4 == Scramble4 && Code5 == Scramble5 && Code6 == Scramble6 && Code7 == Scramble7 && Code8 == Scramble8) {
				cout << "After you enter the numbers onto the keypad you hear the door softly creak open revealing an empty room." << endl << "You see a note on the ground that reads: So close yet so far. We will be meeting soon." << endl;
				{
					cout << "      ____________________        " << endl;
					cout << "      |    |             |            " << endl;
					cout << "      |    |             |            " << endl;
					cout << "      |    |             |            " << endl;
					cout << "      |    |             |            " << endl;
					cout << "      |    |             |            " << endl;
					cout << "      |    |             |            " << endl;
					cout << "      |    |             |            " << endl;
					cout << "      |    /             |            " << endl;
					cout << "      |   /              |            " << endl;
					cout << "      |  /               |            " << endl;
					cout << "      | /                |            " << endl;
					cout << "      |/                 |            " << endl;

				}
				cout << "The door slams shut sealing all of you inside with only a small light overhead for you to see." << endl << "Thank you for playing. We will be seeing you again soon~" << endl;
				{

					cout << " _______________________  " << endl;
					cout << " |_________   _________|   " << endl;
					cout << "           | |        " << endl;
					cout << "           | |_____________        " << endl;
					cout << "           | |_____  _____| " << endl;
					cout << "           | |    |  |      " << endl;
					cout << "           | |    |  |  " << endl;
					cout << "           | |    |  |  " << endl;
					cout << "           | |____|  |____  " << endl;
					cout << "  _________| |_________  |      " << endl;
					cout << " |_____________________|_| " << endl;
					cout << "    INDEX INTERACTIVE                        " << endl;
				}
			}
			else {
				cout << "This code was incorrect. You have lost! The mansion door shuts and locks you in forever";
				{

					cout << " _______________________  " << endl;
					cout << " |_________   _________|   " << endl;
					cout << "           | |        " << endl;
					cout << "           | |_____________        " << endl;
					cout << "           | |_____  _____| " << endl;
					cout << "           | |    |  |      " << endl;
					cout << "           | |    |  |  " << endl;
					cout << "           | |    |  |  " << endl;
					cout << "           | |____|  |____  " << endl;
					cout << "  _________| |_________  |      " << endl;
					cout << " |_____________________|_| " << endl;
					cout << "    INDEX INTERACTIVE                        " << endl;
				}

			}

		}
		else {


			cout << "You see several rooms ahead of you. You may choose which you would like to go in: " << endl << "1. Security Room" << endl << "2. Bathroom" << endl << "3. Kitchen" << endl << "4. Library" << endl << "5. Gym" << endl << "6. Stage" << endl << "7. Bedroom" << endl << "8. Greenhouse" << endl << endl;
			cout << "To enter a room please enter the coresponding number" << endl << "You may only enter each room once" << endl << endl;
			int room = rooms();
			cout << endl;
			if (room == 1) {
				{
					cout << "                 ____________" << endl;
					cout << "                |            |                 _________" << endl;
					cout << "                |            |                |_________| " << endl;
					cout << "                |____________|                | | | | | | " << endl;
					cout << "                      ||                      | | | | | |" << endl;
					cout << "                    ||||||                    |_|_|_|_|_|" << endl;
					cout << "||||||||||||||||||||||||||||||||||||||||||||| |______|  |" << endl;
					cout << "||||||||||||||||||||||||||||||||||||||||||||| |______|  |" << endl;
					cout << "||||||||||||||||||||||||||||||||||||||||||||| |______|  |" << endl;
					cout << "||||||||||||||||||||||||||||||||||||||||||||| |______|__|" << endl;
					cout << "|||||||||||                      |||||||||||| | | | | | |" << endl;
					cout << "|||||||||||                      |||||||||||| | | | | | |" << endl;
					cout << "|||||||||||                      |||||||||||| |_|_|_|_|_| " << endl;
				}
				cout << "You have chosen the secuity room." << endl;
				cont2++;
				random1++;
			}
			else if (room == 2) {
				{
					cout << "                                                                __________     " << endl;
					cout << "                                                               |          |    " << endl;
					cout << "                                            ()   ____          |          |      " << endl;
					cout << "                                       ()___||___|__|___()     |          |     " << endl;
					cout << "                                                               |          |     " << endl;
					cout << "             ()__________()__________()                        |__________|     " << endl;
					cout << "               |        |  |        |                                           " << endl;
					cout << "               |        |  |        |                            ___|_____       " << endl;
					cout << "               |________|  |________|                           (        )        " << endl;
					cout << "    _____                                  ________       ________(____)_______" << endl;
					cout << "    |   |                                 {        }      |        ____       |" << endl;
					cout << "  __|________________________________     |        |      |___________________|" << endl;
					cout << " {                                  }     |________|      |   ___   |   ___   |" << endl;
					cout << "  {                                }     {__________}     |_________|_________|  " << endl;
					cout << "   {                              }       {        }      |   ___   |   ___   |" << endl;
					cout << "     {__________________________}          {______}       |_________|_________| " << endl;

				}
				cout << "You have chosen the bathroom." << endl;
				cont2++;
				random2++;
			}
			else if (room == 3) {
				{
					cout << "   _____________________                                                        ________________             " << endl;
					cout << "   |___________________|                        _________                      |________________|" << endl;
					cout << "   |                   |      ()    ()     ___ |        |______________________|                |" << endl;
					cout << "   |         |  |      |_____{__}__(__)___|___||________|                      |                |" << endl;
					cout << "   | _____   |  |      |                       | ______ |______________________|____            |" << endl;
					cout << "   | |___|   |  |      |                       |        |  |                |  |                |" << endl;
					cout << "   | |   |   |  |      |_______________________|        | ( )       __     ( ) |____o_o_o_o_____| " << endl;
					cout << "   | |   |   |  |      |  |_______________|  | |________|            |                             " << endl;
					cout << "   | |___|   |  |      |   |  o |       |   ( ) _____________________|_____________________________" << endl;
					cout << "   |         |  |      |   |  o |_______|      | ________________|_____________|_____o_o_o_o______| " << endl;
					cout << "   |         |  |      |   |____________|      |      |     |     |      |     |  |            | |   " << endl;
					cout << "   |                   |_______________________|    | |   | |   | |    | |_____|  |            | | " << endl;
					cout << "   |___________________|                       |      |     |     |      |     |  |____________| | " << endl;
					cout << "   |___________________|_______________________|______|_____|_____|______|_____|_________________| " << endl;


				}
				cout << "You have chosen the kitchen." << endl;
				cont2++;
				random3++;
			}
			else if (room == 4) {
				{
					cout << "|||						|_|_|_|_|_|_|_|_|" << endl;
					cout << "|||						|_|_|_|_|_|_|_|_|" << endl;
					cout << "|||						|_|_|_|_|_|_|_|_|" << endl;
					cout << "|||						|_|_|_|_|_|_|_|_|" << endl;
					cout << "|||||||||||	||||||||||||||||||||||		|_|_|_|_|_|_|_|_|" << endl;
					cout << "|||||||||||	||||||||||||||||||||||		|_|_|_|_|_|_|_|_|" << endl;
					cout << "||	||	||||		  ||||		|_|_|_|_|_|_|_|_|" << endl;
					cout << "||	||	||||		  ||||		|_|_|_|_|_|_|_|_|" << endl;
					cout << "||	||	||||		  ||||		|_______________|" << endl;
				}
				cout << "You have chosen the library." << endl;
				cont2++;
				random4++;
			}
			else if (room == 5) {
				{
					cout << "                                                                   __________/                            " << endl;
					cout << "                                                                  |__________|               " << endl;
					cout << "                        ____________________                               /               " << endl;
					cout << "                       |                    |___                          /                " << endl;
					cout << "                       |____________________|___|                        /                   " << endl;
					cout << "( )---( )             /                  |           ___________________/_____                                         " << endl;
					cout << "( )---( )         ___/___             ___|___       |_________________________|                                  " << endl;
				}
				cout << "You have chosen the gym." << endl;
				cont2++;
				random5++;
			}
			else if (room == 6) {
				{
					cout << "           ______                                                     ______                                   " << endl;
					cout << "          |      |                                                   |      |                        " << endl;
					cout << "          |______|                                                   |______|                                  " << endl;
					cout << "           /    |                                                     /    |                            " << endl;
					cout << "          /     |                                                    /     |                               " << endl;
					cout << "         /      |                                                   /      |                              " << endl;
					cout << "                                                                                          " << endl;
					cout << "        _____________                                               ______________                               " << endl;
					cout << "       |             |                                             |              |   " << endl;
					cout << "       |     ___     |                                             |     ___      |        " << endl;
					cout << "       |    (   )    |                                             |    (   )     |        " << endl;
					cout << "       |    (___)    |                   ()                        |    (___)     |          " << endl;
					cout << "       |             |                   ||                        |              |           " << endl;
					cout << "       |_____________|                   ||                        |______________|         " << endl;
					cout << "       |             |                   ||                        |              |          " << endl;
					cout << "       |     ___     |                   ||                        |     ___      |             " << endl;
					cout << "       |    (   )    |                   ||                        |    (   )     |              " << endl;
					cout << "       |    (___)    |                   ||                        |    (___)     |                  " << endl;
					cout << "       |             |                ___||___                     |              |               " << endl;
					cout << "       |_____________|               /________|                    |______________|                                                " << endl;
					cout << "                                      ______                                                 " << endl;
					cout << "                                _____|______|__                                         " << endl;
					cout << "                              _|_______________|_                                                     " << endl;
					cout << "                         ____|___________________|___                                                        " << endl;
					cout << "                ________|____________________________|_________                                                           " << endl;
					cout << "       ________|_______________________________________________|________                                                                " << endl;
					cout << "  ____|_________________________________________________________________|__________                                                                                " << endl;
					cout << " |_________________________________________________________________________________|                                                                                      " << endl;

				}
				cout << "You have chosen the stage." << endl;
				cont2++;
				random6++;
			}
			else if (room == 7) {
				{
					cout << " ____________                                __   " << endl;
					cout << "(	     )                              /  |         " << endl;
					cout << "(	     )                               ||   " << endl;
					cout << "(____________)______________________         ||	                                " << endl;
					cout << "|				    |  ||||||||||||	   " << endl;
					cout << "|				    |  ||||||||||||" << endl;
					cout << "|				    |  ||	 ||" << endl;
					cout << "|___________________________________|  ||	 ||" << endl;
				}
				cout << "You have chosen the bedroom." << endl;
				cont2++;
				random7++;
			}
			else if (room == 8) {

				{
					cout << "                                            " << endl;
					cout << "         <             >                       ( )     " << endl;
					cout << "       <    >       <  <  >                  (    )    " << endl;
					cout << "     <  <   > >    < <   >  >       ( )     (      )   " << endl;
					cout << "    <  <    <  >  <  <   >   >    (     )    (    )   " << endl;
					cout << "   < < <    > > >  <  < > >  >     (   )      (  )         " << endl;
					cout << "    < < < > > >   <  <   >  >       ( )        ()     " << endl;
					cout << "      < ( ) >       < ( )  >         |       {    }  " << endl;
					cout << "         |             |          {     }   |______|       " << endl;
					cout << "       {    }        {   }       |_______|                 " << endl;
					cout << "     {        }    {       }                        " << endl;
					cout << "     |________|    |_______|                              " << endl;
				}
				cout << "You have chosen the greenhouse." << endl;
				cont2++;
				random8++;
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



		//int random = riddle();
		if (random1 == 1)
		{
			cout << "What is a popular broadway show starring a historical figure from early U.S.history ? " << endl << "Make sure your answers are capitalised" << endl;
		q1:


			int timer = 20;
			while (timer > 0)
			{
				Sleep(1000);
				timer--;
				if (timer > 0) {

					if (_kbhit())
					{
						cout << endl;
						cin >> answer1;
						cout << endl;
						if (answer1 == "Hamilton")
						{
							//int Scramble1 = letters();
							corr++;
							cout << "Your Number is: " << Scramble1 << endl;
							goto yort;


						}
						else
						{
							cout << "incorrect try again" << endl;
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
		else if (random2 == 1)
		{
			cout << "I have branches, but no fruit, trunk or leaves. What am I? " << endl << "Make sure your answers are capitalised" << endl;
		q2:

			int timer = 20;
			while (timer > 0)
			{
				Sleep(1000);
				timer--;
				if (timer > 0) {

					if (_kbhit()) {
						cout << endl;
						cin >> answer1;
						cout << endl;
						if (answer1 == "Bank") {

							//int Scramble2 = letters();
							corr++;
							cout << "Your Number is: " << Scramble2 << endl;
							goto yort;


						}
						else {
							cout << "incorrect try again" << endl;
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



		else if (random3 == 1)
		{
			cout << "What has to be broken before you can use it? " << endl << "Make sure your answers are capitalised" << endl;
		q3:

			int timer = 20;
			while (timer > 0)
			{
				Sleep(1000);
				timer--;
				if (timer > 0) {

					if (_kbhit()) {
						cout << endl;
						cin >> answer1;
						cout << endl;
						if (answer1 == "Egg") {

							//int Scramble3 = letters();
							corr++;
							cout << "Your Number is: " << Scramble3 << endl;
							goto yort;


						}
						else {
							cout << "incorrect try again" << endl;
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
		else if (random4 == 1)
		{
			cout << "What number comes next in this pattern; 2,4,8,16,32...? " << endl << "Make sure your answers are capitalised" << endl;
		q4:

			int timer = 20;
			while (timer > 0)
			{
				Sleep(1000);
				timer--;
				if (timer > 0) {

					if (_kbhit()) {

						cout << endl;
						cin >> answer1;
						cout << endl;

						if (answer1 == "64") {

							//int Scramble4 = letters();


							corr++;
							cout << "Your Number is: " << Scramble4 << endl;
							goto yort;


						}
						else {
							cout << "incorrect try again" << endl;
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

		else if (random5 == 1)
		{
			cout << "I have two hands, but I can not scratch myself. What am I? " << endl << "Make sure your answers are capitalised" << endl;
		q6:

			int timer = 20;
			while (timer > 0)
			{
				Sleep(1000);
				timer--;
				if (timer > 0) {

					if (_kbhit()) {
						cout << endl;
						cin >> answer1;
						cout << endl;
						if (answer1 == "Clock") {

							//int Scramble6 = letters();
							corr++;
							cout << "Your Number is: " << Scramble5 << endl;
							goto yort;


						}
						else {
							cout << "incorrect try again" << endl;
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
		else if (random6 == 1)
		{
			cout << " I live in the jungle, my father was killed, I am to be king of the jungle one day, I sing I cant wait to be king. Who am I? " << endl << "Make sure your answers are capitalised" << endl;
		q7:

			int timer = 20;
			while (timer > 0)
			{
				Sleep(1000);
				timer--;
				if (timer > 0) {

					if (_kbhit()) {
						cout << endl;
						cin >> answer1;
						cout << endl;
						if (answer1 == "Simba") {

							//int Scramble7 = letters();
							corr++;
							cout << "Your Number is: " << Scramble6 << endl;
							goto yort;


						}
						else {
							cout << "incorrect try again" << endl;
							goto q7;
						}
					}
				}


				if (timer == 0) {
					cout << "You lose! The door shuts and locks forever.";
				}
			}

		}

		else if (random7 == 1)
		{
			cout << "What goes up and down but doesnt move? " << endl << "Make sure your answers are capitalised" << endl;
		q9:

			int timer = 20;
			while (timer > 0)
			{
				Sleep(1000);
				timer--;
				if (timer > 0) {

					if (_kbhit()) {
						cout << endl;
						cin >> answer1;
						cout << endl;
						if (answer1 == "Stairs") {

							//int Scramble9 = letters();
							corr++;
							cout << "Your Number is: " << Scramble7 << endl;
							goto yort;


						}
						else {
							cout << "incorrect try again" << endl;
							goto q9;
						}
					}
				}


				if (timer == 0) {
					cout << "You lose! The door shuts and locks forever.";
				}
			}

		}

		else if (random8 == 1)
		{
			cout << "What has many teeth, but cant bite? " << endl << "Make sure your answers are capitalised" << endl;
		q11:

			int timer = 20;
			while (timer > 0)
			{
				Sleep(1000);
				timer--;
				if (timer > 0) {

					if (_kbhit()) {
						cout << endl;
						cin >> answer1;
						cout << endl;
						if (answer1 == "Comb") {

							//int Scramble11 = letters();
							corr++;
							cout << "Your Number is: " << Scramble8 << endl;
							goto yort;


						}
						else {
							cout << "incorrect try again" << endl;
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
		cout << "Congratulations!" << endl << "The door opens and you enter the hallway which room do you go to next?" << endl;
		corr--;
		cont2--;
		final++;
		random1 = 0;
		random2 = 0;
		random3 = 0;
		random4 = 0;
		random5 = 0;
		random6 = 0;
		random7 = 0;
		random8 = 0;
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



/*int riddle()
{

	srand(time(NULL));
	int RandomRiddle = 0;
	RandomRiddle = rand() % 11 + 1;
	return RandomRiddle;

}*/
int letters()
{



	int r = 0;
	char Scramble;
	Scramble = 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z';
	for (int i = 0; i < 26; i++)
	{

		Scramble = rand() % 26 + 1;
		return Scramble;
	}


}

