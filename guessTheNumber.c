// Using a seeding approach to create truly random numbers, 
// the program genarates a random number between 1 and 10 for the user to guess. 
// The user choose three numbers at once.
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
   srand(time(0)); // The srand function uses the time fucntion to seed a random number. 
                   // The time returns the the current time in seconds. 
                   // Then, the rand function generates a sequence from the "seed".

   guessTheNumber(); // A call to the guessTheNumber fucntion which 
} // end function main


void guessTheNumber(void) { // guessTheNumber generates numbers between 1 and 10,
                            // then checks the user's guess, and also tracks the number of guesses.                      
   
   int answer;       // Randomly generated number.
   int guess;        // User's guess.
   int respoonse;    // 1 or 2 response to continue game.
   int guesses = 0;  // Keeps track of how many guesses the user has made and it initialised to 0.

   do {  // loop until user types 2 to quit game
     
      answer = 1 + rand() % 10; // generate random number between 1 and 10,
                                // and wherein 1 is a shift and 10 is a scaling factor
      
      puts("I have generated a number between 1 and 10.\n" // prompting for the user to enter a number as a guess
           "The fewer guesses you make to guess the number, the more lucky you are!\n"
           "Please type your guess: ");
     
     // reading the user's entered number 
     scanf("%d", &guess);

      // loop until correct number
      while (!isCorrect(guess, answer)) {
         scanf("%d", &guess);
         guesses++;
      }
      
      // prompt for another game
      puts("\nExcellent! You guessed the number!"
      checkLukc(guesses);   
      puts("\nWould you like to play again?");
      
      guesses = 0;
      printf("%s", "Please type ( 1=yes, 2=no )? ");
      scanf("%d", &response);

      puts("");
   } while (response == 1);
} // end function guessGame



int isCorrect(int g, int a) {   // isCorrect returns true if g equals a,
                                // but if g does not equal a, a hint is displayed.
   
   if (g == a) // Guess is correct.
      return 1;
   
   if (g > 10) // Reminds the user that they need to guess between 1 and 10.
      puts("That number is outside of the range you are supposed to guess within!");
   
   if (g < a)
      printf( "%s", "Too low. Try again.\n? " );
   else
      printf( "%s", "Too high. Try again.\n? " );

   return 0;
} // end function isCorrect

void checkLuck(int) {
   
   if (guessesNumber =< 2)
      return puts("/n You are very lucky!"
         "Buy a lottery ticket!");
   if (guessesNumber > 2 && =<6)
      return puts("/n You are a little lucky!"
         "Maybe buy a lottery ticket?");
   if (guessesNumber >= 10 && >7)
      return puts("/n You are not that lucky! Sorry");
   
}




