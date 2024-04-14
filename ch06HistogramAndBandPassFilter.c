// Adapted from "C How to Program" by P. J. Deitel and H. M. Deitel, 8th edition, Pearson
// The original program is below the extended program
// No IDE used

// Displaying a histogram (as a signal) and a filtered signal.
// The original program just printed a histogram.  

#include <stdio.h>
#define SIZE 25

// function main begins program execution
int main(void)
{
   // use initializer list to initialize array n
   int n[SIZE] = {19, 3, 15, 7, 11, 
                  22, 3, 1, 4, 21,
                  19, 5, 2, 24, 14,
                  8, 15, 19, 12, 1,
                  6, 18, 24, 9, 13};

   printf("%s%13s%17s\n", "Element", "Value", "Histogram");

   // for each element of array n, output a bar of the histogram
   for (size_t i = 0; i < SIZE; ++i) {
      printf("%7u%13d        ", i, n[i]) ;

      for (int j = 1; j <= n[i]; ++j) { // print one bar
         printf("%c", '*');                                  
	   }                                     
      puts(""); // end a histogram bar with a newline
   } 
   puts("");
   puts("This approach could be used to display signals.");
   puts("Below is a simple implementaiton of a band fitler.");
   puts("");
   
    printf("%s%13s%23s\n", "Element", "Value", "Filtered Signal");

   // for each element of array n, output a bar of the histogram
   for (size_t i = 0; i < SIZE; ++i) {
      
      printf("%7u%13d        ", i, n[i]);

      if (n[i] > 5 && n[i] < 20) {
            for (int j = 1; j <= n[i]; ++j) { // print one bar
            printf("%c", '*');                                  
	    }   }                                     
    puts(""); // end a histogram bar with a newline
    }    
}


/*
// Fig. 6.8: fig06_08.c
// Displaying a histogram.
#include <stdio.h>
#define SIZE 5

// function main begins program execution
int main(void)
{
   // use initializer list to initialize array n
   int n[SIZE] = {19, 3, 15, 7, 11};

   printf("%s%13s%17s\n", "Element", "Value", "Histogram");

   // for each element of array n, output a bar of the histogram
   for (size_t i = 0; i < SIZE; ++i) {
      printf("%7u%13d        ", i, n[i]) ;

      for (int j = 1; j <= n[i]; ++j) { // print one bar
         printf("%c", '*');                                  
	   }                                     

      puts(""); // end a histogram bar with a newline
   } 
}
*/
