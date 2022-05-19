/*
Student Name: Arianna Bikombe
Date: March 4, 2021
Course: CSCI175N
Lab Assignment: Lab04-01GuessingGame
Project Name: Guessing Game
File Name: Lab04-01GuessingGame.cpp
Description: Generates random number between 1 and 100 and asks user to guess it.
Limitations: Doesn't do very much.
Credits: Not Applicable
 */

#include <iostream>
#include <cstdlib>  // Needed for rand and srand
#include <ctime>    // Needed for the time function
using namespace std;

int main()
{
    int guess;  // To hold the user's guess
    int count;  // To hold the count of guesses

    // Get the system time so we can use it
    // to seed the random number generator.
    unsigned seed = (unsigned int)time(0);

    // Use the seed value to seed the random number generator.
    srand(seed);

    // Generate a random number. To keep things reasonable,
    // we will keep it within the range of 1 through 100.
    int number = 1 + rand() % 100;

    cout << "Arianna Bikombe\n";
    cout << "CSCI175N\n";
    cout << "Lab 04_01\n\n";

    // Prompt user to enter data needed by the program
    cout << "I'm thinking of a number between 1 and 100. Can you \n";
    cout << "guess what it is? " << flush;
    cin >> guess;

    for (count = 1; count < 100; count++) {
        if (number == guess) {    // If the number is guessed 
            cout << "Congratulations! You guessed it!\n";
            cout << "I was thinking of the number " << number << ".";
            cout << "\nYou got it right in " << count << " guesses.\n\n";
            break;
        } else if (number > guess) {
            cout << "No, that's too low.\n";
            cout << "Guess again: " << flush;
            cin >> guess;
        } else if (number < guess) {
            cout << "Sorry, that's too high.\n";
            cout << "Guess again: " << flush;
            cin >> guess;
        }
    }

    // This code pauses the program so instructor can grade
    system("pause");

    return 0;
}

/*

test 1

Arianna Bikombe
CSCI175N
Lab 04_01

I'm thinking of a number between 1 and 100. Can you
guess what it is? 45
No, that's too low.
Guess again: 90
Sorry, that's too high.
Guess again: 78
Sorry, that's too high.
Guess again: 67
Sorry, that's too high.
Guess again: 63
Sorry, that's too high.
Guess again: 50
No, that's too low.
Guess again: 52
No, that's too low.
Guess again: 53
No, that's too low.
Guess again: 54
No, that's too low.
Guess again: 57
Sorry, that's too high.
Guess again: 56
Congratulations! You guessed it!
I was thinking of the number 56.
You got it right in 11 guesses.

Press any key to continue . . .

*/

/*

test 2

Arianna Bikombe
CSCI175N
Lab 04_01

I'm thinking of a number between 1 and 100. Can you
guess what it is? 78
Sorry, that's too high.
Guess again: 46
No, that's too low.
Guess again: 68
No, that's too low.
Guess again: 75
Sorry, that's too high.
Guess again: 73
Congratulations! You guessed it!
I was thinking of the number 73.
You got it right in 5 guesses.

Press any key to continue . . .

*/

/*

test 3

Arianna Bikombe
CSCI175N
Lab 04_01

I'm thinking of a number between 1 and 100. Can you
guess what it is? 48
No, that's too low.
Guess again: 85
Sorry, that's too high.
Guess again: 64
Sorry, that's too high.
Guess again: 53
No, that's too low.
Guess again: 57
No, that's too low.
Guess again: 59
Congratulations! You guessed it!
I was thinking of the number 59.
You got it right in 6 guesses.

Press any key to continue . . .

*/