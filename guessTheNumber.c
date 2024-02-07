// Using a seeding to create truly random numbers the program 
// genarates a random number between 1 and 10 for the user to guess. 
// The main addition to the program is that the program keeps track of how many
// guesses the user has made and uses this to determine how lucky the user is.
// The sooner the user guesses the number, the more lucky the user is.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void guessTheNumber(void);   // Function prototype that does not take an input or return an output.
int correctNumber(int, int); // Function prototype that takes two inputs of int type and returns an int.
void checkLuck(int);         // Function prototype that takes one input of int type and returns nothing. 
                             // The checkLuck function puts directly instead of returning a value.

int main(void) { // main function returns an int i.e., a 0, does not take any parameters.
  
   srand(time(0));   // The srand function uses the time fucntion to seed a random number. 
                     // The time returns the the current time in seconds. 
                     // Then, the rand function generates a sequence from the "seed".

   guessTheNumber(); // A call to the guessTheNumber fucntion which 

   puts("Thanks for playing!");
  
} // end function main.


void guessTheNumber(void) { // guessTheNumber generates numbers between 1 and 10,
                            // then checks the user's guess, and also tracks the number of guesses.                      
   
   int answer;       // Randomly generated number.
   int guess;        // User's guess.
   int guesses;      // Keeps track of how many guesses the user has made.
   char response;    // Y or Q response to continue or Quit the game.
  
   do { // Loops until user types chooses to quit the game by entering Q. 
        // Runs the loop once and then seeks a "Y" from the user to continue.

      guesses = 0;              // Initialise the number of guesses the user has taken to 0.
     
      answer = 1 + rand() % 10; // Generate random number between 1 and 10,
                                // 1 being a shift and 10 being a scaling factor.
      
      puts("I have generated a number between 1 and 10.\n" // prompting for the user to enter a number as a guess
           "The fewer guesses you make to guess the number, the more lucky you are!\n"
           "Please type your guess: ");
     
      scanf("%d", &guess);      // Reading in the number entered by the user.

      while (!correctNumber(guess, answer)) { // Loops until the correct number is entered by the user.
         scanf("%d", &guess); // Reads in the number entered by the user.
         guesses++;           // Counts how many guesses the user is taking to guess the correct number.
      }
      
      puts("Excellent! You guessed the number!\n"); 
      checkLuck(guesses);                      // Calls the checkLuck function to determine how lucky the user was in guessing.
      
      puts("Would you like to play again?\n"); // Prompts the user for another game. 
      puts("Please type (Y = Yes, Q = No, thanks, Quit)");
      scanf(" %c", &response); 
      
   } while (response == 'Y');                  // BC Y is a character literal it requires parentheses.
  
} // end function guessTheNumber.


int correctNumber(int g, int a) {   // isCorrect returns true if g equals a,
                                    // but if g does not equal a, a hint is displayed.
   if (g > 10) // Reminds the user that they need to guess between 1 and 10.
      puts("That number is outside of the range you are supposed to guess within!\n");
  
  if (g == a)
      return 1;
  
   if (g < a)
      printf("%s", "Too low. Try again.\n" );
     
   else
      printf("%s", "Too high. Try again.\n" );

   return 0;
  
} // end function correctNumber.

void checkLuck(int guessesNumber) { // Function determines if the user is lucky or not.  
                                    // This is an origianl function added to the program.  
   if (guessesNumber <= 2)
      return puts("You are very lucky!\n"
         "Buy a lottery ticket!\n");
   if (guessesNumber >= 3 && guessesNumber <= 6)
      return puts("You are a little lucky!\n"
         "Maybe buy a lottery ticket?\n");
   else if (guessesNumber >= 7)
      return puts("You are not that lucky! Sorry.\n");  
  
} // end function checkLuck.




