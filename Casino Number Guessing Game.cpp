//This project is a fun and interactive number guessing game where the player bets money 
// and tries to guess a randomly generated number within a specified range. 
// The game rewards correct guesses and deducts money for incorrect ones, simulating a casino-like experience.
#include <iostream>
#include <cstring>
#include <vector>
using namespace std;


int main()
{
	int initbalance=100;
	int balance;
	int finalbalance;
	int bet;
	int number;
	int n;
	balance = initbalance;
	int guess;
	cout << "Welcome to the guessing game!" << endl;
	cout << "The rules are simple, you have to guess a number from 10 to 99!" << endl;
	cout << "If your number is within 5 of mine (meaning it is 5 greater or 5 less), you win (5x your bet). Otherwise, you lose your bet." << endl;
	cout << "But there's a catch, if you guess my exact number, you win the jackpot! (1000x your bet!)" << endl;
	cout << "Now, if the rules are clear, let's start!" << endl;
	cout << "Your balance is: " << initbalance<<"$"<<endl;
	while (true)
	{
		if (balance > 0) {
			srand(time(NULL));
			number = rand() % 100;
			cout << "1.Place your bet..." << endl;
			cout << "2.Show balance..." << endl;
			cout << "3.Leave the game..." << endl;
			cin >> n;
			if (n == 1)
			{
				cin >> bet;
				if (bet > balance) {
					cout << "The bet is higher than the balance!" << endl;
				}
				else {
					cout << "Take your guess!" << endl;
					cin >> guess;
					if ((guess >= (number - 5)) && (guess <= (number + 5)) && guess != number)
					{
						cout << "Congratulations, you won! The number was " << number << endl;
						balance = (balance - bet) + (bet * 5);
					}
					else if (guess == number)
					{
						cout << "JACKPOTTTTT, YOU HAVE GUESSED THE EXACT NUMBER!!!" << endl;
						balance = (balance - bet) + (bet * 1000);
					}
					else {
						cout << "You lost! The number was " << number << endl;
						balance -= bet;
					}
				}
			}
			else if (n == 2)
			{
				cout << "Your balance is now: " << balance << "$" << endl;
			}
			else if (n == 3)
			{
				if (balance > initbalance)
				{
					cout << "Congratulations!!! You have made a profit of " << balance - initbalance << "$" << endl;
					cout << "Thanks for playing!";
					break;
				}
				if (balance < initbalance)
				{
					cout << "Unfortunately, you have lost " << initbalance - balance << "$, better luck next time!" << endl;
					cout << "Thanks for playing!";
					break;
				}
				if (balance > initbalance)
				{
					cout << "You didn't lose today, but you didn't win either.Your balance is still 100$";
					cout << "Thanks for playing!";
					break;
				}
			}
			else
			{
				cout << "Please select a number from 1 to 3 !" << endl;
			}
		}
		else {
			cout << "Your balance is at 0$! See you next time!";
		}

	}
}

