// Adapted from "C How to Program" by P. J. Deitel and H. M. Deitel, 8th edition, Pearson
// The original program is below the extended program
// No IDE used

// Using the & and * pointer operators.
// The original code is improved by making the explanation a little clearer and 
// by showing that pointer can be pointed to by another pointer

#include <stdio.h>

int main(void) {

   int a = 7;
   int *aPtr = &a; // set aPtr to the address of a
    int **aPtrToPtr = &aPtr; // set aPtrToPtr to the address of aPtr

   printf("The address of the variable 'a' is %p"
          "\nThe value held by the pointer 'aPtr' is %p", &a, aPtr);

   printf("\n\nThe value of the vairable 'a' is %d"   
          "\nThe value of *aPtr is %d", a, *aPtr);
   printf("\nUsing the * before the pointer retrieves, i.e., derefrences, the value of what is at the address which the pointer holds."); 

/* 
For &*aPtr, dereferencing aPtr with * gives the value at that address, and & then takes the address of that value, resulting in aPtr. For *&aPtr, taking the address of aPtr with & and then dereferencing it with * also results in aPtr. 
*/

   printf("\n\nShowing that * and & are complements of "
          "each other\n&*aPtr = %p"   
          "\n*&aPtr = %p\n", &*aPtr, *&aPtr);

   printf("\nShowing that aPtr has its own address address %p", &aPtr);
   
   printf("\nShowing that a pointer can be pointed to by another pointer: aPtrToPtr points to aPtr %p ", &aPtr);  

} // end of main function


/*

// Fig. 7.4: fig07_04.c
// Using the & and * pointer operators.
#include <stdio.h>

int main(void)
{
   int a = 7;
   int *aPtr = &a; // set aPtr to the address of a

   printf("The address of a is %p"
          "\nThe value of aPtr is %p", &a, aPtr);

   printf("\n\nThe value of a is %d"   
          "\nThe value of *aPtr is %d", a, *aPtr);

   printf("\n\nShowing that * and & are complements of "
          "each other\n&*aPtr = %p"   
          "\n*&aPtr = %p\n", &*aPtr, *&aPtr);
} 

*/
