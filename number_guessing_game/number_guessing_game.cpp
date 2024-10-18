

#include <iostream>
using namespace std;

int main()
{

	cout << "welcome to the number guessing game!\n";
	cout << "first chocse the you want Hard or Easy or Half\n level is:";
	string level;
	cin >> level;

	cout << "\nso can you guess what it is?\n";
	cout << " you have only 5 guees from 1 : 10 for Easy:level Good luck\n";
	cout << "and you have only 10 guees  from 1 : 100 for half:level Good luck\n";
	cout << "and you have only 15 guees  from 1 : 1000 for hard:level Good luck\n";


	srand(time(0));

	int number = 0;
	if (level == "half")  number = rand() % 100 + 1;
	else if (level == "hard")  number = rand() % 1000 + 1;
	else if (level == "easy")  number = rand() % 10 + 1;

	int guess;
	


	bool again = true;
	string want = "yes";

	while(again)
	{
		int i = 0;
	do
	{
	
		cout << "enter your guess:";
		cin >> guess;
		i++;
		if (guess > number) cout << "to high try again\n";
		else if (guess < number) cout << "to low try again\n";
		else
		{
			cout << "greet you get it\n";
			cout << "it took you "<<i<<" attempts\n";
			cout << "if you want play again enter yes or no\n";
			cin >> want;
			if (want == "yes")
			{
				again == true;
				i = 0;
				cout << "first chocse the you want Hard or Easy or Half\n level is:";
				cin >> level;

				if (level == "half")  number = rand() % 100 + 1;
				else if (level == "hard")  number = rand() % 1000 + 1;
				else if (level == "easy")  number = rand() % 10 + 1;
			}
			else
			{
				return 0;
			}
		}

		if (i  == 5&& level=="easy")
		{

			cout << "where is your ind this is your 3 guess be responsbilaity\n";
			cout << "if you want play again enter yes or no\n";
			cin >> want;
			if (want == "yes")
			{
				again == true;
				i = 0;
				cout << "first chocse the you want Hard or Easy or Half\n level is:";
				cin >> level;

				if (level == "half")  number = rand() % 100 + 1;
				else if (level == "hard")  number = rand() % 1000 + 1;
				else if (level == "easy")  number = rand() % 10 + 1;
			}
			else
			{
				return 0;
			}
		}
		else if (i  == 6&&level=="half")
		{
			cout << "where is your mind this is your 6 guess be responsbilaity\n";
			cout << "if you want play again enter yes or no\n";
			cin >> want;
			if (want == "yes")
			{
				again == true;
				i = 0;
				cout << "first chocse the you want Hard or Easy or Half\n level is:";
				cin >> level;

				if (level == "half")  number = rand() % 100 + 1;
				else if (level == "hard")  number = rand() % 1000 + 1;
				else if (level == "easy")  number = rand() % 10 + 1;
			}
			else
			{
				return 0;
			}
		}
		else if (i == 15&&level=="hard")
		{

			cout << "where is your mind this is your 15 guess be responsbilaity\n";
			cout << "if you want play again enter yes or no\n";
			cin >> want;
			if (want == "yes")
			{
				again == true;
				i = 0;
			}
			else
			{
				return 0;
			}
		}

	} while (guess != number);
  }
}
