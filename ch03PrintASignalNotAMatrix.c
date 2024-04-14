// Adapted from "C How to Program" by P. J. Deitel and H. M. Deitel, 8th edition, Pearson
// No IDE used

// This program prints a pattern made from a "<" or ">" character depending if the row is an odd or even row.
// The original program printed a matrix of ten rows and ten columns.
// My program is adapted to print a pattern to preint each row with fewer characters.
// An idea for a future program is to print the characters to draw an exponential curve.

#include <stdio.h>

int main(void) // Start function main.
{
   unsigned int row = 10; // Initialise the row value. The int is unsigned, 
                          // but it would not appear there is a need for this  
                          // because the outer loop guards against a value less than 1.
   unsigned int columnMAX = 10;  // Initialise the MAX column value outside of the loops.

   while (row >= 1) {     // Loop from row value of 10 until row has a value of < 1. 
      unsigned int column = 1; // Set column to 1 as iteration begins 
      
      while (column <= columnMAX) {   // Loop 10 times along the page. 
         printf("%s", row % 2 ? "<": ">"); // output 
         ++column; // increment column 
      } // end inner while 
      --columnMAX; // Decrement how many times a character is printed per row.
      --row;      // Decrement row. 
      puts("");   // Begin new output line. 
   } // End outer while.
} // End function main.
