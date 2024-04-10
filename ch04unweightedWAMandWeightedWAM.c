// Counting letter grades with switch
// This program calculates the WAM (Weighted Average Marks),
// adding extra weight to the 'b' and 'a' marks.
// It also shows the unweighted WAM.

#include <stdio.h>

int main(void)
{
   unsigned int aCount = 0; 
   unsigned int bCount = 0; 
   unsigned int cCount = 0; 
   unsigned int dCount = 0;
   unsigned int eCount = 0;
   float WAM = 0;
   float uWAM = 0;
   char x;

   puts("This program calculates your WAM, giving extra weight to your A and B grades." );
   puts("Enter the letter grades A to E with spaces in between." );
   puts("Enter the 'x' character to end input." );
   int grade; // one grade 

   // loop until user types end-of-file key sequence
   while ((grade = getchar()) != 'x') { // I use x instead of EOF, which was not working on the online compiler I was testing the code one
                                        // NB this is one of few times I recall to have used the getchar() function
      
      // determine which grade was input
      switch (grade) { // switch nested in while

         case 'A': // grade was uppercase A
         case 'a': // or lowercase a
            ++aCount; 
            break; // necessary to exit switch

         case 'B': // grade was uppercase B
         case 'b': // or lowercase b
            ++bCount;
            break;

         case 'C': // grade was uppercase C
         case 'c': // or lowercase c
            ++cCount; 
            break;

         case 'D': // grade was uppercase D
         case 'd': // or lowercase d
            ++dCount; 
            break;

         case 'E': // grade was uppercase E
         case 'e': // or lowercase e
            ++eCount;
            break; 

         case '\n': // ignore newlines,
         case '\t': // tabs,
         case ' ': // and spaces in input
            break; 

         default: // catch all other characters
            printf("%s", "Incorrect letter grade entered."); 
            puts(" Enter a new grade."); 
            break; // optional; will exit switch anyway
      } 
   } // end while

   // output summary of results
   puts("\nTotals for each letter grade are:");
   printf("A: %u\n", aCount);
   printf("B: %u\n", bCount); 
   printf("C: %u\n", cCount); 
   printf("D: %u\n", dCount); 
   printf("E: %u\n", eCount); 

   WAM = ((1.5*(90*aCount)) + (1.25*(80*bCount)) + (70*cCount) + (60*dCount) + (50*eCount)) / (aCount + bCount + cCount + dCount + eCount);
   printf("The weighted WAM is: %.2f\n", WAM); // Format to 1 decimal place

   uWAM = ((90*aCount) + (80*bCount) + (70*cCount) + (60*dCount) + (50*eCount)) / (aCount + bCount + cCount + dCount + eCount);
   printf("The unweighted WAM is: %.2f\n", uWAM); // Format to 1 decimal place
} 


/*
// Counting letter grades with switch
#include <stdio.h>

int main(void)
{
   unsigned int aCount = 0; 
   unsigned int bCount = 0; 
   unsigned int cCount = 0; 
   unsigned int dCount = 0;
   unsigned int fCount = 0; 

   puts("Enter the letter grades." );
   puts("Enter the EOF character to end input." );
   int grade; // one grade 

   // loop until user types end-of-file key sequence
   while ((grade = getchar()) != EOF) {
      
      // determine which grade was input
      switch (grade) { // switch nested in while

         case 'A': // grade was uppercase A
         case 'a': // or lowercase a
            ++aCount; 
            break; // necessary to exit switch

         case 'B': // grade was uppercase B
         case 'b': // or lowercase b
            ++bCount;
            break;

         case 'C': // grade was uppercase C
         case 'c': // or lowercase c
            ++cCount; 
            break;

         case 'D': // grade was uppercase D
         case 'd': // or lowercase d
            ++dCount; 
            break;

         case 'F': // grade was uppercase F
         case 'f': // or lowercase f
            ++fCount;
            break; 

         case '\n': // ignore newlines,
         case '\t': // tabs,
         case ' ': // and spaces in input
            break; 

         default: // catch all other characters
            printf("%s", "Incorrect letter grade entered."); 
            puts(" Enter a new grade."); 
            break; // optional; will exit switch anyway
      } 
   } // end while

   // output summary of results
   puts("\nTotals for each letter grade are:");
   printf("A: %u\n", aCount);
   printf("B: %u\n", bCount); 
   printf("C: %u\n", cCount); 
   printf("D: %u\n", dCount); 
   printf("F: %u\n", fCount); 
} 
*/
