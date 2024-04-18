// Adapted from "C How to Program" by P. J. Deitel and H. M. Deitel, 8th edition, Pearson
// The original program is below the extended program
// No IDE used

// Linear search of three keys in two arrays.
// The original code only searhed for one key in one array.
// Potential to improve the code and add some loops.

#include <stdio.h>
#define SIZE 100

// function prototype
size_t linearSearch(const int array[], int key, size_t size); 

// function main begins program execution
int main(void)
{   
   int a[SIZE]; // create array a

   // create some data
   for (size_t x = 0; x < SIZE; ++x) { 
      a[x] = 2 * x;
   } 

   int b[SIZE]; // create array a

   // create some data
   for (size_t x = 0; x < SIZE; ++x) { 
      b[x] = 1 * x;
   } 

   printf("\n\nEnter a first integer search key: ");
   int searchKeyFirst; // value to locate in array a
   scanf("%d", &searchKeyFirst);

   printf("\nEnter a second integer search key: ");
   int searchKeySecond; // value to locate in array a
   scanf("%d", &searchKeySecond);
   
   printf("\nEnter a third integer search key: ");
   int searchKeyThird; // value to locate in array a
   scanf("%d", &searchKeyThird);

   size_t index;
   // attempt to locate searchKey in array a 
   index = linearSearch(a, searchKeyFirst, SIZE);

   // display results
   if (index != -1) {
      printf("\nFirst key found at index %ld in array a", index);
   } 
   else {
      printf("\nFirst key not found in array a");
   } 

   // attempt to locate searchKey in array a 
   index = linearSearch(a, searchKeySecond, SIZE);

   // display results
   if (index != -1) {
      printf("\nSecond key found at index %ld in array a", index);
   } 
   else {
      printf("\nSecond key not found in array a");
   } 
   
   // attempt to locate searchKey in array a 
   index = linearSearch(a, searchKeyThird, SIZE);

   // display results
   if (index != -1) {
      printf("\nThird key found at index %ld in array a", index);
   } 
   else {
      printf("\nThird key not found in array a");
   } 

   // attempt to locate searchKeyFirst in array b
   index = linearSearch(b, searchKeyFirst, SIZE);

   // display results
   if (index != -1) {
      printf("\nFirst key found at index %ld in array b", index);
   } 
   else {
      printf("\nFirst key not found in array b");
   } 

   // attempt to locate searchKeySecond in array b 
   index = linearSearch(b, searchKeySecond, SIZE);

   // display results
   if (index != -1) {
      printf("\nSecond key found at index %ld in array b", index);
   } 
   else {
      printf("\nSecond key not found in array b");
   } 
   
   // attempt to locate searchKeyThird in array b 
   index = linearSearch(b, searchKeyThird, SIZE);

   // display results
   if (index != -1) {
      printf("\nThird key found at index %ld in array b", index);
   } 
   else {
      printf("\nThird key not found in array b");
   } 
} // End of program

// compare key to every element of array until the location is found 
// or until the end of array is reached; return index of element 
// if key is found or -1 if key is not found                               
size_t linearSearch(const int array[], int key, size_t size)      
{                                                                    
   // loop through array                                          
   for (size_t n = 0; n < size; ++n) {                                    
                                                                     
      if (array[n] == key) {                                     
         return n; // return location of key                      
      }                                                  
   }                                                    
                                                                     
   return -1; // key not found                                    
} 

/*
// Fig. 6.18: fig06_18.c
// Linear search of an array.
#include <stdio.h>
#define SIZE 100

// function prototype
size_t linearSearch(const int array[], int key, size_t size); 

// function main begins program execution
int main(void)
{   
   int a[SIZE]; // create array a

   // create some data
   for (size_t x = 0; x < SIZE; ++x) { 
      a[x] = 2 * x;
   } 

   printf("Enter integer search key: ");
   int searchKey; // value to locate in array a
   scanf("%d", &searchKey);

   // attempt to locate searchKey in array a 
   size_t index = linearSearch(a, searchKey, SIZE);

   // display results
   if (index != -1) {
      printf("Found value at index %d\n", index);
   } 
   else {
      puts("Value not found");
   } 
}

// compare key to every element of array until the location is found 
// or until the end of array is reached; return index of element 
// if key is found or -1 if key is not found                               
size_t linearSearch(const int array[], int key, size_t size)      
{                                                                    
   // loop through array                                          
   for (size_t n = 0; n < size; ++n) {                                    
                                                                     
      if (array[n] == key) {                                     
         return n; // return location of key                      
      }                                                  
   }                                                    
                                                                     
   return -1; // key not found                                    
} 
                               
*/




