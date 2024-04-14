// Adapted from "C How to Program" by P. J. Deitel and H. M. Deitel, 8th edition, Pearson
// The original program is below the extended program
// No IDE used

// Treating character arrays as strings.
// I increased the SIZE of the array and also added a loop to print string2, 
// an intended string literal, with spaces just like string1.

#include <stdio.h>
#define SIZE 30

// function main begins program execution
int main(void)
{
   char string1[SIZE]; // reserves 30 characters
   char string2[] = "string literal"; // reserves 15 characters

   // read string from user into array string1
   printf("%s", "Enter a string (no longer than 29 characters): ");
   scanf("%29s", string1); // input no more than 29 characters

   // output strings
   printf("string1 is: %s\nstring2 is: %s\n" "string1 with spaces between characters is:\n", string1, string2); // printing two separate lines one printf()call                                   

   // output characters until null character is reached  
   for (size_t i = 0; i < SIZE && string1[i] != '\0'; ++i) {
      printf("%c ", string1[i]);                     
   }                                           
   puts("");
   printf("Verifying that string2 is also just an array:\n");                                    

   // output characters until null character is reached  
   for (size_t i = 0; i < 15 && string2[i] != '\0'; ++i) {
      printf("%c ", string2[i]);                     
   }                                           
}



/*
// Fig. 6.10: fig06_10.c
// Treating character arrays as strings.
#include <stdio.h>
#define SIZE 20

// function main begins program execution
int main(void)
{
   char string1[SIZE]; // reserves 20 characters
   char string2[] = "string literal"; // reserves 15 characters

   // read string from user into array string1
   printf("%s", "Enter a string (no longer than 19 characters): ");
   scanf("%19s", string1); // input no more than 19 characters

   // output strings
   printf("string1 is: %s\nstring2 is: %s\n"                  
           "string1 with spaces between characters is:\n",     
           string1, string2);                                    

   // output characters until null character is reached  
   for (size_t i = 0; i < SIZE && string1[i] != '\0'; ++i) {
      printf("%c ", string1[i]);                     
   }                                           

   puts("");
}
*/
