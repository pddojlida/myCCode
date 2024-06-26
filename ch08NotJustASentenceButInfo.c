// Adapted from "C How to Program" by P. J. Deitel and H. M. Deitel, 8th edition, Pearson
// The original program is below the extended program
// No IDE used

// Using the getchar function to store first and last name, and phone number.
// The original code only took in "a sentence".  The code has been modified to be more purpuseful.

#include <stdio.h>
#define SIZE 80

int main(void)
{ 
   int c; // variable to hold character input by user
   
   char firstName[SIZE]; // create char array
   int i = 0; // initialize counter i

   // prompt user to enter line of text
   puts("Enter your first name(s):"); 

   // use getchar to read each character                
   while ((i < SIZE - 1) && (c = getchar()) != '\n') {
      firstName[i++] = c;                              
   }        

   firstName[i] = '\0'; // terminate string

   char lastName[SIZE]; // create char array
   i = 0; // initialize counter i

   // prompt user to enter line of text
   puts("Enter your last name:"); 

   // use getchar to read each character                
   while ((i < SIZE - 1) && (c = getchar()) != '\n') {
      lastName[i++] = c;                              
   }                                        

   lastName[i] = '\0'; // terminate string

   char phoneNumber[SIZE]; // create char array
   i = 0; // initialize counter i

   // prompt user to enter line of text
   puts("Enter your phone Number:"); 

   // use getchar to read each character                
   while ((i < SIZE - 1) && (c = getchar()) != '\n') {
      phoneNumber[i++] = c;                              
   }                                        

   phoneNumber[i] = '\0'; // terminate string
   
   // use puts to display sentence
   puts("\nFirst Name:"); 
   puts(firstName);

   puts("\nLast Name:"); 
   puts(lastName);

   puts("\nPhone Number:"); 
   puts(phoneNumber);
} 




/*

// Fig. 8.11: fig08_11.c
// Using function getchar.
#include <stdio.h>
#define SIZE 80

int main(void)
{ 
   int c; // variable to hold character input by user
   char sentence[SIZE]; // create char array
   int i = 0; // initialize counter i

   // prompt user to enter line of text
   puts("Enter a line of text:"); 

   // use getchar to read each character                
   while ((i < SIZE - 1) && (c = getchar()) != '\n') {
      sentence[i++] = c;                              
   }                                        

   sentence[i] = '\0'; // terminate string
   
   // use puts to display sentence
   puts("\nThe line entered was:"); 
   puts(sentence);
} 


*/
