// Adapted from "C How to Program" by P. J. Deitel and H. M. Deitel, 8th edition, Pearson
// The original program is below the extended program
// No IDE used

// Sorting an array's values into ascending and descending order.
// The original program 

#include <stdio.h>
#define SIZE 25

// function main begins program execution
int main(void) {   
   // initialize a
   int a[SIZE] = {2, 6, 4, 5, 10, 12, 89, 68, 45, 37, 2, 7, 8, 9, 11, 114, 86, 62, 40, 7, 67, 1, 3, 44, 42,}; 

   puts("Data items in original order");
   
   // output original array
   for (size_t i = 0; i < SIZE; ++i) {
      printf("%4d", a[i]);
   } 
   puts(" ");
  
   // bubble sort configured to sort numbers from smallest to largest                                         
   // loop to control number of passes                    
   for (unsigned int pass = 1; pass < SIZE; ++pass) {                   
                                                             
      // loop to control number of comparisons per pass   
      for (size_t i = 0; i < SIZE - 1; ++i) {                     
                                                             
         // compare adjacent elements and swap them if first 
         // element is greater than second element           
         if (a[i] > a[i + 1]) {                        
            int hold = a[i];                                   
            a[i] = a[i + 1];                             
            a[i + 1] = hold;                               
         }                                       
      }                                   
   }                                      

   puts("\nData items in ascending order");

   // output sorted array
   for (size_t i = 0; i < SIZE; ++i) {
      printf("%4d", a[i]);
   } 

   puts("");

   // bubble sort configured to sort numbers from largest to smallest                                         
   // loop to control number of passes                    
   for (unsigned int pass = 1; pass < SIZE; ++pass) {                   
                                                             
      // loop to control number of comparisons per pass   
      for (size_t i = 0; i < SIZE - 1; ++i) {                     
                                                             
         // compare adjacent elements and swap them if first 
         // element is greater than second element           
         if (a[i] < a[i + 1]) {                        
            int hold = a[i];                                   
            a[i] = a[i + 1];                             
            a[i + 1] = hold;                               
         }                                       
      }                                   
   }                                      

   puts("\nData items in descending order");

   // output sorted array
   for (size_t i = 0; i < SIZE; ++i) {
      printf("%4d", a[i]);
   } 
} // end of program

