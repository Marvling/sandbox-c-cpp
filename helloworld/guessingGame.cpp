#include <iostream>
#include <cmath>
#include <string>

using std::cin;
using std::cout;
using std::endl;

//char< short< int< long< long long<

int main()
{
    srand(std::time(NULL));

    int secretNumber, guessedNumber;
    int guessCounter = 0;
    bool win = false;

    secretNumber = rand() % 10;
    while (win == false)
    {
        cout << "guess a number between 1 and 10 \n";

        cin >> guessedNumber;

        if (guessedNumber == secretNumber)
        {
            guessCounter++;
            cout << "You won in " + std::to_string(guessCounter) + " tries\n";
            win = true;
        }
        else if (guessedNumber > secretNumber)
        {
            cout << "You guesed high\nguess lower\n";
            guessCounter++;
        }
        else
        {
            cout << "You guesed low\nguess higher\n";
            guessCounter++;
        }
    }
}