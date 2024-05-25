// Adapted from "C How to Program" by P. J. Deitel and H. M. Deitel, 8th edition, Pearson
// The original program is below the extended program
// No IDE used

// Concatenation of three strings by using pointers
// The original code only concatenated two strings

#include <stdio.h>
#define SIZE 80

void mystery1(char *s1, char *s2, char *s3); // prototype of the function

int main(void) {
   char string1[SIZE]; // create a char array (string1) of size 80
   char string2[SIZE]; // create another char array (string2) of size 80
   char string3[SIZE]; // create yet another char array (string3) of size 80

   puts("Enter three strings (e.g., words): "); // prompt user to enter three strings
   scanf("%79s%79s%79s", string1, string2, string3); // read three strings from user input (up to 79 characters each)
   mystery1(string1, string2, string3); // call the function mystery1 with string1, string2, and string3 as arguments
   printf("%s", string1); // print the modified string1
} 

// This function appends the contents of s2 to the end of s1
void mystery1(char *s1, char *s2, char *s3) {
  
   // Move the pointer s1 to the end of the current string
   while (*s1 != '\0') {
      ++s1; // increment the pointer until it points to the null character at the end of the string
   } 

   // Copy characters from s2 to the end of s1, including the null terminator
   // Because the arrays are 80 characters long there is no overflow
   for (; *s1 = *s2; ++s1, ++s2) {
      ; // empty statement, work is done in the for loop's control section
   } 

   // Move the pointer s1 to the end of the current string
   while (*s1 != '\0') {
      ++s1; // increment the pointer until it points to the null character at the end of the string
   } 

   // Copy characters from s2 to the end of s1, including the null terminator
   // Because the arrays are 80 characters long there is no overflow
   for (; *s1 = *s3; ++s1, ++s3) {
      ; // empty statement, work is done in the for loop's control section
   } 
}

// ex07_19.c
// What does this program do?
#include <stdio.h>
#define SIZE 80

void mystery1(char *s1, const char *s2); // prototype

int main(void)
{
   char string1[SIZE]; // create char array
   char string2[SIZE]; // create char array

   puts("Enter two strings: ");
   scanf("%79s%79s" , string1, string2);
   mystery1(string1, string2);
   printf("%s", string1);
} 

// What does this function do?
void mystery1(char *s1, const char *s2)
{
   while (*s1 != '\0') {
      ++s1;
   } 

   for (; *s1 = *s2; ++s1, ++s2) {
      ; // empty statement
   } 
}
