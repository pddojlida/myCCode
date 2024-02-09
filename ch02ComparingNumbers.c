// Using if statements, relational 
// operators, and equality operators - but not ">=" or "<="
// The original code used only two numbers, 
// this code is extended to use three numbers

#include <stdio.h>

// function main begins program execution
int main(void) {

   printf("Enter three integers, and I will tell you\n");
   printf("the relationships they satisfy: ");

   int num1; // first number to be read from user
   int num2; // second number to be read from user
   int num3; // third number to read from user
   
   scanf("%d %d %d", &num1, &num2, &num3); // read three integers
   
   if ( num1 == num2 == num3) { // if block 1 checks equality
      printf("All the numbers are equal\n");
      printf("%d is equal to %d\n", num1, num2);
   } 
   else if (num1 == num2) {
      printf("%d is equal to %d\n", num1, num2);
   } 
   else if (num1 == num3) {
      printf("%d is equal to %d\n", num1, num3);
   } 
   else if (num2 == num3) {
      printf("%d is equal to %d\n", num2, num3);
   } // end if block 1

   
   if (num1 != num2) { 
      printf("%d is not equal to %d\n", num1, num2);
   } 
   if (num2 != num3) {
      printf("%d is not equal to %d\n", num2, num3);
   } 
   if (num1 != num3) {
      printf("%d is not equal to %d\n", num1, num3);
   }

   
   if (num1 < num2) { 
      printf("%d is less than %d\n", num1, num2);
   } // end if

   if (num1 > num2) {
      printf("%d is greater than %d\n", num1, num2);
   } // end if

   if (num2 < num3) { 
      printf("%d is less than %d\n", num2, num3);
   } // end if

   if (num2 > num3) {
      printf("%d is greater than %d\n", num2, num3);
   } // end if

   if (num1 < num3) { 
      printf("%d is less than %d\n", num1, num3);
   } // end if

   if (num1 > num3) {
      printf("%d is greater than %d\n", num1, num3);
   } // end if
 
} // end function main
