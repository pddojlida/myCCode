#include <stdio.h>
#include <math.h>

unsigned int i = 0;
unsigned int j = 0;
unsigned int k = 0;
unsigned int l = 0;
unsigned int m = 1;
unsigned int n = 0;
unsigned int o = 0;
float nDec = 0.0;

int main(void){

   // calculates and outputs the square root
   printf("sqrt(%.1f) = %.1f\n", 16.0, sqrt(16.0));
   puts(" ");
   for (i = 1; i <= sqrt(16.0); i++) {        // Doing the inner loop sqrt(16.0) times
       for (j = 1; j <= sqrt (16.0); j++) {   // The inner loop prints a # character sqrt(16.0) times
           printf("#");
       }
   puts(" "); // Goes to a new line 
   }
   puts(" ");
   printf("You can see that the square has 16.0 #'s. If you count how many #'s are on one side you get the square root.\n");
   puts(" ");
   // calculates and outputs the cube root
   printf("Now, imagine a cube %.1f elements wide, %.1f elements tall, and %.1f elements deep.\nIf you count how many elements are on one edge, you get the cube root.\n", cbrt(27.0), cbrt(27.0), cbrt(27.0));
   puts(" ");
   
   // calculates and outputs the exponential function e to the x
   puts("Check out the following output sequence of exponential values and how they are converted back to their intputs.");
   puts(" ");
   
   for (k = 1; k <= 9; k++) {
       printf("exp(%d) = %.2f\n", k, exp(k));
       puts(" ");
   }

    // calculates and outputs the logarithm (base e), but first generates the exponential value
   for (l = 1; l <= 9; l++) {
       printf("exp(%d) = %.2f\n", l, exp(l));
       puts(" ");
       printf("log(%f) = %.1f\n", exp(l), log(exp(l)));
       puts(" ");
   }
   puts(" ");
 
   // calculates and outputs the logarithm (base 10)
   while (m <100000) {
       m *= 10;  
       printf("log10(%d) = %f\n", m, log10(m));
       puts(" ");
    }
   }

   // calculates and outputs the absolute value
   puts(" ");
   printf("fabs(%.1f) - fabs(%.1f) = %.1f\n", 13.5,  (fabs(fabs(13.5) - fabs(-26.5)));
   puts("How can 13.5 - (-26.5) = - 13.5? we are dealing in values, not numbers.");
   puts(" ");

   // calculates and outputs ceil(x)
   for (n = 1; n <= 5; n++) {
      nDec = n;
      for (o = 1; o <10; o++) {
         nDec = nDec + 0.1;   
         printf("ceil(%.1f) = %.1f\n", nDec, ceil(nDec));
         printf("floor(%.1f) = %.1f\n", nDec, floor(nDec));
      }
   }
///////////////////////////////////////////////////////////////////////////////// HERE   
   // calculates and outputs pow(x, y)
   printf("pow(%.1f, %.1f) = %.1f\n", 2.0, 7.0, pow(2.0, 7.0));
   printf("pow(%.1f, %.1f) = %.1f\n", 9.0, 0.5, pow(9.0, 0.5));
   
   // calculates and outputs fmod(x, y)
   printf("fmod(%.3f/%.3f) = %.3f\n", 13.657, 2.333, 
      fmod(13.657, 2.333));

   // calculates and outputs sin(x)
   printf("sin(%.1f) = %.1f\n", 0.0, sin(0.0));
   
   // calculates and outputs cos(x)
   printf("cos(%.1f) = %.1f\n", 0.0, cos(0.0));
   
   // calculates and outputs tan(x)
   printf("tan(%.1f) = %.1f\n", 0.0, tan(0.0));
} 

/
