// Fig. 9.2: fig09_02.c
// Using the integer conversion specifiers
#include <stdio.h>

int main(void)
{ 
   printf("The following number, 455, is written to the screen using the following code: printf(\"%%d\", 455)\;\n");
   printf("The\"d\" argument indicates that the number is to be printed as an integer\n");
   printf("%d", 455\n);
   
   printf("Now, 455 is written to the screen using the following code: printf(\"%%i\", 455)\;\n");
   printf("The\"i\" argument indicates that the number is to be printed as an integer\n");
   printf("The effect is the same as using \"d\"\n);
   printf("%i", 455\n); 

   printf("Now, 455 is written to the screen using the following code: printf(\"%%d\", +455)\;\n");
   printf("Notably, the \"+\" does not print."\n);
   printf("%d", +455\n); 

   printf("Now, -455 is written to the screen using the following code: printf(\"%%d\", -455)\;\n");
   printf("Notably, the \"-\" does print. It is redundant to use the \"+\" "\n);
   printf("%d", -455\n); 
   
   printf("Below, the number 32000 is written to the screen using the following code: printf(\"%%hd\", 32000)\;\n");
   printf("The "\hd\" argument indicates that that the number to be printed as a short int which uses 2 bytes of memory."\n);
   printf("%hd", 32000\n);

   \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ UPTO HERE
   
   printf("%ld\n", 2000000000L); // L suffix makes literal a long 
   
   printf("%o\n", 455); // octal
   
   printf("%u\n", 455);
   
   printf("%u\n", -455);
   
   printf("%x\n", 455); // hexadecimal with lowercase letters
   
   printf("%X\n", 455); // hexadecimal with uppercase letters
} 


/*

// Fig. 9.2: fig09_02.c
// Using the integer conversion specifiers
#include <stdio.h>

int main(void)
{ 
   printf("%d\n", 455);
   printf("%i\n", 455); // i same as d in printf, different in scanf
   printf("%d\n", +455); // plus sign does not print
   printf("%d\n", -455); // minus sign prints
   printf("%hd\n", 32000);
   printf("%ld\n", 2000000000L); // L suffix makes literal a long 
   printf("%o\n", 455); // octal
   printf("%u\n", 455);
   printf("%u\n", -455);
   printf("%x\n", 455); // hexadecimal with lowercase letters
   printf("%X\n", 455); // hexadecimal with uppercase letters
} 


*/
