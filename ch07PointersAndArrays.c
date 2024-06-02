// Fig. 7.20: fig07_20.cpp
// Using indexing and pointer notations with arrays.

#include <stdio.h>
#define ARRAY_SIZE 4

int main(void)
{
   int b[] = {10, 20, 30, 40}; // create and initialize array b
   int *bPtr = b; // create bPtr and point it to array b

   puts("This program shows various notations which can be used to access array elements.");

   // output array b using array index notation
   puts("\nArray b printed with:\nArray index notation. ");
   puts("This works by using the index in the bracket b[i] "
         "to access the array element");

   // loop through array b
   for (size_t i = 0; i < ARRAY_SIZE; ++i) {
      printf("b[%u] = %d\n", i, b[i]);
   } 

   // output array b using array name and pointer/offset notation
   puts("\nPointer/offset notation where "
         "the pointer is the array name");
   puts("\nThe * symbol works a little bit like a function that accesses "
        "the first element of the array named b plus the offset"); 

   // loop through array b
   for (size_t offset = 0; offset < ARRAY_SIZE; ++offset) {
      printf("*(b + %u) = %d\n", offset, *(b + offset));  
   } 

   // output array b using bPtr and array index notation
   puts("\nPointer index notation "
        "works by using the pointer bPtr " 
        "EXACTLY as if it was using the name b of the pointer");

   // loop through array b
   for (size_t i = 0; i < ARRAY_SIZE; ++i) {
      printf("bPtr[%u] = %d\n", i, bPtr[i]);
   } 

   // output array b using bPtr and pointer/offset notation
   puts("\nPointer/offset notation, " 
        "which is exactly the same as the second example, "
        "following the principle in the third example.");

   // loop through array b
   for (size_t offset = 0; offset < ARRAY_SIZE; ++offset) {
      printf("*(bPtr + %u) = %d\n", offset, *(bPtr + offset));   
   } 
} 




/*

// Fig. 7.20: fig07_20.cpp
// Using indexing and pointer notations with arrays.
#include <stdio.h>
#define ARRAY_SIZE 4

int main(void)
{
   int b[] = {10, 20, 30, 40}; // create and initialize array b
   int *bPtr = b; // create bPtr and point it to array b

   // output array b using array index notation
   puts("Array b printed with:\nArray index notation");

   // loop through array b
   for (size_t i = 0; i < ARRAY_SIZE; ++i) {
      printf("b[%u] = %d\n", i, b[i]);
   } 

   // output array b using array name and pointer/offset notation
   puts("\nPointer/offset notation where\n"
         "the pointer is the array name");

   // loop through array b
   for (size_t offset = 0; offset < ARRAY_SIZE; ++offset) {
      printf("*(b + %u) = %d\n", offset, *(b + offset));  
   } 

   // output array b using bPtr and array index notation
   puts("\nPointer index notation");

   // loop through array b
   for (size_t i = 0; i < ARRAY_SIZE; ++i) {
      printf("bPtr[%u] = %d\n", i, bPtr[i]);
   } 

   // output array b using bPtr and pointer/offset notation
   puts("\nPointer/offset notation");

   // loop through array b
   for (size_t offset = 0; offset < ARRAY_SIZE; ++offset) {
      printf("*(bPtr + %u) = %d\n", offset, *(bPtr + offset));   
   } 
} 

*/
