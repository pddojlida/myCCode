// Adapted from "C How to Program" by P. J. Deitel and H. M. Deitel, 8th edition, Pearson
// No IDE used

// This program demonstrates incrementing and decrementing  
// The original program only pre and post incremented

#include <stdio.h>

// function main begins program execution 
int main(void){
   
   int c; // define variable 
   
   // demonstrate postincrement 
   c = 5; // assign 5 to c variable
   printf("This prints the value of a c variable, next the value with a postincrement, then the value of the c variable again.\n"); // This sentence added by me
   printf("%d\n", c);    // print 5 
   printf("%d\n", c++);  // print 5 then postincrement
   printf("%d\n", c);  // print 6                                   
   
   // demonstrate preincrement 
   printf("This prints the value of a c variable, next the value with a preincrement, then the value of the c variable again.\n"); // This sentence added by me
   printf("%d\n", c);    // print 6 
   printf("%d\n", ++c);  // preincrement then print 7
   printf("%d\n", c);    // print 7  

   // demonstrate predecrement
   printf("This prints the value of a c variable, next the value with a predecrement, then the value of the c variable again.\n"); // This sentence added by me
   printf("%d\n", c);    // print 7 
   printf("%d\n", --c);  // predecrement then print 6
   printf("%d\n", c);    // print 6

   // demonstrate predecrement
   printf("This prints the value of a c variable, next the value with a postdecrement, then the value of the c variable again.\n"); // This sentence added by me
   printf("%d\n", c);    // print 6 
   printf("%d\n", c--);  // print 6 then postdecrement
   printf("%d\n", c);    // print 5
   printf("We're back to the initial value of the c variable, being 5.");

} // end function main 

