#include <stdio.h>
#define SIZE 80
char string[SIZE]; // create char array

size_t mystery2(char *s); // prototype, size_t is an unsigned integer type in C and C++ that is used to represent the size of objects in bytes.
void mystery3(char *s);

int main(void)
{
   puts("Enter a string: ");
   scanf("%79s", string); 
   printf("There are %d letters in the string\n", mystery2(string));
   puts("Here they are counted individually:");
   mystery3(string);
} 

// What does this function do?
size_t mystery2(char *s) {
   size_t x; // counter
  
   // declare and instantiate counter for loop
   int i = 0;
   // loop through string
   for (x = 0; *s != '\0'; ++s) {
     ++x;
   } 
   return x;
}

// What does this function do?
void mystery3(char *s) {
   // delcare and instantiate variable for keeping track of the array element numnber
   int num = 1;
   // loop through string and print each letter with a corresponding number, verifying the previous count
   for ( ; *s != '\0'; ++s) {
     printf("%c %d\n", *s, num++); // The key lesson here is that the s in the loop does increment for the purpose of the printf(), and
   }                               // *s allows you to access the element of the array via the pointer value, the array being being string[] 
}

/*

// ex07_20.c
// what does this program do?
#include <stdio.h>
#define SIZE 80

size_t mystery2(const char *s); // prototype

int main(void)
{
   char string[SIZE]; // create char array

   puts("Enter a string: ");
   scanf("%79s", string); 
   printf("%d\n", mystery2(string));
} 

// What does this function do?
size_t mystery2(const char *s) 
{
   size_t x; // counter

   // loop through string
   for (x = 0; *s != '\0'; ++s) {
      ++x;
   } 

   return x;
}

*/
