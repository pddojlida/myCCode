// The original program prompted the user for two numbers and then summed them.
// This program allows the user to choose to add, subtract, multiply, or divide.

#include <stdio.h>

int main(void) { // Function main begins program execution

   int integer1;   // First number to be entered by user
   int integer2;   // Second number to be entered by user
   int equals;        // Variable in which sum or result will be stored
   char operation;

   printf("Enter first integer\n");  // Prompt
   scanf("%d", &integer1);           // Read a first integer

   printf("Enter second integer\n"); // Prompt
   scanf("%d", &integer2);           // Read a second integer
  
   printf("Type \"a\" to add, \"s\" to subtract, \"d\" to divide, \"m"\ to multiply\n");  // Prompt
   scanf(" %c", &operation); // read a char, space before %c to skip whitespace

   if (operation == 'a') {
       equals = integer1 + integer2; // Assign total to sum
       printf("Sum is %d\n", sum); // Print the sum
   }
   else if (operation == 's') {
       equals = integer1 - integer2; // Assign total to sum
       printf("Difference is %d\n", sum); // Print the difference
   }
   else if (operation == 'm') {
       equals = integer1 * integer2; // Assign total to sum
       printf("Product is %d\n", sum); // Print the difference
   }
   else if (operation == 'd') { 
       if (integer2 != 0) { // Check to avoid division by zero - chatGPT suggestion
           equals = integer1 / integer2; // Assign quotient to sum
           printf("Quotient is %d\n", sum); // Print the quotient
       } else {
           printf("Cannot divide by zero.\n");
       }
   }
      
   else {
       printf("Invalid operation.\n"); // chatGPT suggestion
   }

   return 0; // End function main
}
