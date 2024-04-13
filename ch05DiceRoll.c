#include <stdio.h>
#include <stdlib.h>

int main(void)
{ 
   unsigned int frequency1 = 0; // rolled 1 counter
   unsigned int frequency2 = 0; // rolled 2 counter
   unsigned int frequency3 = 0; // rolled 3 counter
   unsigned int frequency4 = 0; // rolled 4 counter
   unsigned int frequency5 = 0; // rolled 5 counter
   unsigned int frequency6 = 0; // rolled 6 counter
   unsigned int frequency7 = 0; // rolled 7 counter
   unsigned int frequency8 = 0; // rolled 8 counter
   unsigned int frequency9 = 0; // rolled 9 counter
   unsigned int frequency10 = 0; // rolled 10 counter
   unsigned int frequency11 = 0; // rolled 11 counter
   unsigned int frequency12 = 0; // rolled 12 counter

   printf("This program will test the dodecahedron dice to see which number comes up the most.\n");
   printf("Press any key to continue.\n");
   getchar();
      
   // loop 60000000 times and summarize results
   for (unsigned int roll = 1; roll <= 60000000; ++roll) {
      int face = 1 + rand() % 12; // random number from 1 to 12

      // determine face value and increment appropriate counter
      switch (face) {

         case 1: // rolled 1
            ++frequency1;
            break;

         case 2: // rolled 2
            ++frequency2;
            break;
       
         case 3: // rolled 3
            ++frequency3;
            break;
         
         case 4: // rolled 4
            ++frequency4;
            break;
         
         case 5: // rolled 5
            ++frequency5;
            break;
         
         case 6: // rolled 6
            ++frequency6;
            break; // optional

         case 7: // rolled 7
            ++frequency7;
            break;

         case 8: // rolled 8
            ++frequency8;
            break;
       
         case 9: // rolled 9
            ++frequency9;
            break;
         
         case 10: // rolled 10
            ++frequency10;
            break;
         
         case 11: // rolled 11
            ++frequency11;
            break;
         
         case 12: // rolled 12
            ++frequency12;
            break; // optional
      } 
   } 
   
   // display results in tabular format
   printf("%s%13s\n", "Face", "Frequency");
   printf("   1%13u\n", frequency1);
   printf("   2%13u\n", frequency2);
   printf("   3%13u\n", frequency3);
   printf("   4%13u\n", frequency4);
   printf("   5%13u\n", frequency5);
   printf("   6%13u\n", frequency6);
   printf("   7%13u\n", frequency7);
   printf("   8%13u\n", frequency8);
   printf("   9%13u\n", frequency9);
   printf("  10%13u\n", frequency10);
   printf("  11%13u\n", frequency11);
   printf("  12%13u\n", frequency12);

   unsigned int mode;
   mode = frequency1;
   if (frequency2 > mode) {
         mode = frequency2; 
   } 
   else if (frequency3 > mode) {
         mode = frequency3; 
   }
   else if (frequency3 > mode) {
         mode = frequency3; 
   }
   else if (frequency4 > mode) {
         mode = frequency4; 
   }
   else if (frequency5 > mode) {
         mode = frequency5; 
   }
   else if (frequency6 > mode) {
         mode = frequency6; 
   }
   else if (frequency7 > mode) {
         mode = frequency7; 
   }
   else if (frequency8 > mode) {
         mode = frequency8; 
   }
   else if (frequency9 > mode) {
         mode = frequency9; 
   }
   else if (frequency10 > mode) {
         mode = frequency10; 
   }
   else if (frequency11 > mode) {
         mode = frequency11; 
   }
   else if (frequency12 > mode) {
         mode = frequency12; 
   }

   printf("The mode is %u. If you were to gamble with this dice, you'd want to bet on the mode.", mode);
}
/*
// Fig. 5.12: fig05_12.c
// Rolling a six-sided die 60,000,000 times.
#include <stdio.h>
#include <stdlib.h>

int main(void)
{ 
   unsigned int frequency1 = 0; // rolled 1 counter
   unsigned int frequency2 = 0; // rolled 2 counter
   unsigned int frequency3 = 0; // rolled 3 counter
   unsigned int frequency4 = 0; // rolled 4 counter
   unsigned int frequency5 = 0; // rolled 5 counter
   unsigned int frequency6 = 0; // rolled 6 counter

   // loop 60000000 times and summarize results
   for (unsigned int roll = 1; roll <= 60000000; ++roll) {
      int face = 1 + rand() % 6; // random number from 1 to 6

      // determine face value and increment appropriate counter
      switch (face) {

         case 1: // rolled 1
            ++frequency1;
            break;

         case 2: // rolled 2
            ++frequency2;
            break;
       
         case 3: // rolled 3
            ++frequency3;
            break;
         
         case 4: // rolled 4
            ++frequency4;
            break;
         
         case 5: // rolled 5
            ++frequency5;
            break;
         
         case 6: // rolled 6
            ++frequency6;
            break; // optional
      } 
   } 
   
   // display results in tabular format
   printf("%s%13s\n", "Face", "Frequency");
   printf("   1%13u\n", frequency1);
   printf("   2%13u\n", frequency2);
   printf("   3%13u\n", frequency3);
   printf("   4%13u\n", frequency4);
   printf("   5%13u\n", frequency5);
   printf("   6%13u\n", frequency6);
} 
*/
