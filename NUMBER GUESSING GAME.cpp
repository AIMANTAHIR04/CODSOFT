#include <iostream>
using namespace std;    
int numberguessinggame()
{
	int numberToGuess = rand();    
	int nTries = 0;    
	int guess;    
	bool isGuessRight = false;    
	while (isGuessRight == false)
	{
		cout << "Enter a guess between 1 and 100: ";    
		cin >> guess;    
		nTries++;    
		if (guess == numberToGuess)
		{
			isGuessRight = true;    
		}    
		else if (guess < numberToGuess)
		{
			cout << "Number is higher than " << guess << endl;    
		}    
		else
		{
			cout << "Number is lower than " << guess << endl;    
		}    
	}    
	cout << "Congratulations you guessed the number in " << nTries << " tries" << endl;    
	return 0;    
}
int main()
{
	numberguessinggame();    
	return 0;    
}