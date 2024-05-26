// Adapted from "C How to Program" by P. J. Deitel and H. M. Deitel, 8th edition, Pearson
// The original program is below the extended program
// No IDE used

// Converting a string to uppercase using a non-constant pointer to non-constant data.
// Then, converting the uppercase to lower case.

#include <ctype.h>

void convertToUppercase(char *sPtr); // prototypes
void convertToLowercase(char *sPtr);

int main(void) {
   char string[] = "cHaRaCters and $32.98"; // initialize char array

   printf("The string before conversion to upper case is: %s", string);
   convertToUppercase(string);
   printf("\nThe string after conversion is: %s\n", string); 
   printf("\nThe string before conversion to lower case is: %s", string);
   convertToLowercase(string);
   printf("\nThe string after conversion is: %s\n", string);
} 

    // convert string to uppercase letters
    void convertToUppercase(char *sPtr) {
        while (*sPtr != '\0') { // current character is not '\0' 
        *sPtr = toupper(*sPtr); // convert to uppercase
        ++sPtr; // make sPtr point to the next character
        } 
    }    
   
    // convert string to lowercase letters
    void convertToLowercase(char *sPtr) {
        while (*sPtr != '\0') { // current character is not '\0' 
        *sPtr = tolower(*sPtr); // convert to uppercase
        ++sPtr; // make sPtr point to the next character
        }
    }


/*

// Fig. 7.10: fig07_10.c
// Converting a string to uppercase using a 
// non-constant pointer to non-constant data.
#include <stdio.h>
#include <ctype.h>

void convertToUppercase(char *sPtr); // prototype

int main(void)
{
   char string[] = "cHaRaCters and $32.98"; // initialize char array

   printf("The string before conversion is: %s", string);
   convertToUppercase(string);
   printf("\nThe string after conversion is: %s\n", string); 
} 

// convert string to uppercase letters
void convertToUppercase(char *sPtr)
{
   while (*sPtr != '\0') { // current character is not '\0' 
      *sPtr = toupper(*sPtr); // convert to uppercase
      ++sPtr; // make sPtr point to the next character
   } 
}

*/
