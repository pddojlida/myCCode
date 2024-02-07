// Using a seeding approach to create truly random numbers, 
// the program genarates a random number between 1 and 50 for the user to guess. 
// The user choose three numbers at once.
// The main addition to the program is that the program keeps track of how many
// guesses the user has made and uses this to determine how lucky the user is.
// The sooner the user guesses the number, the more lucky the user is.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void guessTheNumber(void); // function prototype
int correctNumber(int, int); // function prototype

int main(void)
{
   // srand(time(0)); // seed random number generator
   guessTheNumber();
} // end main

// guessTheNumber generates numbers between 1 and 50
// and checks user's guess
void guessTheNumber(void)
{
   int answer; // randomly generated number
   int guess; // user's guess
   int respoonse; // 1 or 2 response to continue game
   int guesses; // keeps track of how many guesses the user has made 
   int luckiness; // lets the user know how lucky they are 

   // loop until user types 2 to quit game
   do {

     // generate random number between 1 and 50, 
     // and wherein 1 is a shift and 50 is a scaling factor
      answer = 1 + rand() % 50; 

      // prompting for the user to enter a number as a guess
      puts("I have generated a number between 1 and 50.\n" 
           "Guess the number to earn $50! Just kidding!\n"
           "The more guesses you take, the less lucky you are!\n"
           "Please type your guess: ");
     
     // reading the user's entered number 
     scanf("%d", &guess);

      // loop until correct number
      while (!isCorrect(guess, answer)) 
         scanf("%d", &guess);

      // prompt for another game
      puts("\nExcellent! You guessed the number!\n"
         "Would you like to play again?");
      printf("%s", "Please type ( 1=yes, 2=no )? ");
      scanf("%d", &response);

      puts("");
   } while (response == 1);
} // end function guessGame

// isCorrect returns true if g equals a
// if g does not equal a, displays hint
int isCorrect(int g, int a)
{
   // guess is correct
   if (g == a)
      return 1;

   // guess is incorrect; display hint
   if (g < a)
      printf( "%s", "Too low. Try again.\n? " );
   else
      printf( "%s", "Too high. Try again.\n? " );

   return 0;
} // end function isCorrect



/**************************************************************************
