// Adapted from "C How to Program" by P. J. Deitel and H. M. Deitel, 8th edition, Pearson
// The original program is below the extended program
// No IDE used

// The original program just calls only 3 functions.  
// This program calls 5 functions, wherein the 5th function calls one of the first 4 functions randomally

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// prototypes
void function1(int a);
void function2(int b);
void function3(int c);
void function4(int d);
void function5(int e);

// initialize array of 5 pointers to functions that each take an
// int argument and return void
void (*f[5])(int) = {function1, function2, function3, function4, function5};

int main(void) {
    printf("%s", "Enter a number between 0 and 3, 4 for a random selection, or 5 to end: ");
    size_t choice; // variable to hold user's choice
    scanf("%u", &choice);

    // process user's choice
    while (choice >= 0 && choice < 5) {
        // invoke function at location choice in array f and pass
        // choice as an argument
        (*f[choice])(choice);

        printf("%s", "Enter a number between 0 and 3, 4 for a random selection, or 5 to end: ");
        scanf("%u", &choice);
    }

    puts("Program execution completed.");
}

void function1(int a) {
    printf("You entered %d so function1 was called\n\n", a);
}

void function2(int b) {
    printf("You entered %d so function2 was called\n\n", b);
}

void function3(int c) {
    printf("You entered %d so function3 was called\n\n", c);
}

void function4(int d) {
    printf("You entered %d so function4 was called\n\n", d);
}

void function5(int e) {
    printf("You entered %d so a random function was called\n\n", e);
    srand(time(NULL));
    int randChoice = rand() % 4;
    (*f[randChoice])(randChoice);
}

/*

// Fig. 7.28: fig07_28.c
// Demonstrating an array of pointers to functions.
#include <stdio.h>

// prototypes
void function1(int a);
void function2(int b);
void function3(int c);

int main(void)
{
   // initialize array of 3 pointers to functions that each take an
   // int argument and return void                              
   void (*f[3])(int) = {function1, function2, function3};    

   printf("%s", "Enter a number between 0 and 2, 3 to end: ");
   size_t choice; // variable to hold user's choice
   scanf("%u", &choice);

   // process user's choice
   while (choice >= 0 && choice < 3) {

      // invoke function at location choice in array f and pass
      // choice as an argument                              
      (*f[choice])(choice);                                

      printf("%s", "Enter a number between 0 and 2, 3 to end: ");
      scanf("%u", &choice);
   } 

   puts("Program execution completed.");
} 

void function1(int a)
{
   printf("You entered %d so function1 was called\n\n", a);
}

void function2(int b)
{
   printf("You entered %d so function2 was called\n\n", b);
}

void function3(int c)
{
   printf("You entered %d so function3 was called\n\n", c);  
}


*/
