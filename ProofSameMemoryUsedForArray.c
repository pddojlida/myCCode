// Adapted from "C How to Program" by P. J. Deitel and H. M. Deitel, 8th edition, Pearson
// The original program is below the extended program
// No IDE used

// The orignal code put values into an array, sorted the values into
// ascending order, and printed the resulting array.  The modified code
// also prints the addresses of each element of the array, thereby actually
// proving that the same block of memory is used to hold the array.

#include <stdio.h>
#define SIZE 10

void bubbleSort(int * const array, const size_t size); 

int main(void) {
   // initialize array a
   int a[SIZE] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
   
   puts("Data items in original order:");

   // loop through array a
   for (size_t i = 0; i < SIZE; ++i) {
      printf("%3d", a[i]);
   } 
   
   // prints the addresses of the elements in the array
   printf("\n\nPrinting the addresses of the array with the original order:");
   for (size_t i = 0; i < SIZE; ++i) {
       printf("\n%p", &a[i]);
   }
   puts(" ");

   bubbleSort(a, SIZE); // sort the array

   puts("\nData items in ascending order");
   
   // loop through array a
   for (size_t i = 0; i < SIZE; ++i) {
      printf("%3d", a[i]);   
   } 
   
   puts(" ");

   // prints the addresses of the elements in the array
   printf("\nPrinting the addresses of the array with ascending order:");
   for (size_t i = 0; i < SIZE; ++i) {
       printf("\n%p", &a[i]);
   }
} 

// sort an array of integers using bubble sort algorithm
void bubbleSort(int * const array, const size_t size) {
   void swap(int *element1Ptr, int *element2Ptr); // prototype
   
   // loop to control passes
   for (unsigned int pass = 0; pass < size - 1; ++pass) {

      // loop to control comparisons during each pass
      for (size_t j = 0; j < size - 1; ++j) {

         // swap adjacent elements if they’re out of order
         if (array[j] > array[j + 1]) {
            swap(&array[j], &array[j + 1]);
         } 
      } 
   } 
}

// swap values at memory locations to which element1Ptr and
// element2Ptr point                                    
void swap(int *element1Ptr, int *element2Ptr) {                                                          
   int hold = *element1Ptr;                                
   *element1Ptr = *element2Ptr;                            
   *element2Ptr = hold;                                    
}


/*

// Fig. 7.15: fig07_15.c
// Putting values into an array, sorting the values into
// ascending order, and printing the resulting array.
#include <stdio.h>
#define SIZE 10

void bubbleSort(int * const array, const size_t size); 

int main(void)
{
   // initialize array a
   int a[SIZE] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
   
   puts("Data items in original order");

   // loop through array a
   for (size_t i = 0; i < SIZE; ++i) {
      printf("%4d", a[i]);
   } 

   bubbleSort(a, SIZE); // sort the array

   puts("\nData items in ascending order");
   
   // loop through array a
   for (size_t i = 0; i < SIZE; ++i) {
      printf("%4d", a[i]);   
   } 

   puts("");
} 

// sort an array of integers using bubble sort algorithm
void bubbleSort(int * const array, const size_t size)
{
   void swap(int *element1Ptr, int *element2Ptr); // prototype
   
   // loop to control passes
   for (unsigned int pass = 0; pass < size - 1; ++pass) {

      // loop to control comparisons during each pass
      for (size_t j = 0; j < size - 1; ++j) {

         // swap adjacent elements if they’re out of order
         if (array[j] > array[j + 1]) {
            swap(&array[j], &array[j + 1]);
         } 
      } 
   } 
}

// swap values at memory locations to which element1Ptr and
// element2Ptr point                                    
void swap(int *element1Ptr, int *element2Ptr)            
{                                                          
   int hold = *element1Ptr;                                
   *element1Ptr = *element2Ptr;                            
   *element2Ptr = hold;                                    
}


*/
