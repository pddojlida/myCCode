// Adapted from "C How to Program" by P. J. Deitel and H. M. Deitel, 8th edition, Pearson
// The original program is below the extended program
// No IDE used

// I only increased the amount of responses, and also carefully studied the loop starting at line 22.
// This is acessing an index in an array by the value of another array - interesting mechanism!

#include <stdio.h>
#define RESPONSES_SIZE 100 // define array sizes
#define FREQUENCY_SIZE 11

// function main begins program execution
int main(void)
{   
   // initialize frequency counters to 0
   int frequency[FREQUENCY_SIZE] = {0};
   
   // place the survey responses in the responses array
   int responses[RESPONSES_SIZE] = {1, 2, 6, 4, 8, 5, 9, 7, 8, 10,
        1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7, 5, 6, 6, 
        5, 6, 7, 5, 6, 4, 8, 6, 8, 10, 1, 2, 6, 4, 8, 5, 9, 7, 8, 10,
        1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7, 5, 6, 6, 
        5, 6, 7, 5, 6, 4, 8, 6, 8, 10, 7, 6, 5, 7, 6, 8, 6, 7, 5, 6, 
        6, 5, 6, 7, 5, 6, 4, 8, 6, 8};

   // for each answer, select value of an element of array responses
   // and use that value as an index in array frequency to 
   // determine element to increment
   for (size_t answer = 0; answer < RESPONSES_SIZE; ++answer) {  
      ++frequency[responses[answer]]; // In my own words: as the loop moves through the elements of responses array, 
                                      // simlutaneously the element of the requency is accessed and 
                                      // increased depending on the value present in the element of the responses array.
   } 

   // display results
   printf("%s%17s\n", "Rating", "Frequency");

   // output the frequencies in a tabular format
   for (size_t rating = 1; rating < FREQUENCY_SIZE; ++rating) {
      printf("%6d%17d\n", rating, frequency[rating]);
   } 
}

/*

// Fig. 6.7: fig06_07.c
// Analyzing a student poll.
#include <stdio.h>
#define RESPONSES_SIZE 40 // define array sizes
#define FREQUENCY_SIZE 11

// function main begins program execution
int main(void)
{   
   // initialize frequency counters to 0
   int frequency[FREQUENCY_SIZE] = {0};
   
   // place the survey responses in the responses array
   int responses[RESPONSES_SIZE] = {1, 2, 6, 4, 8, 5, 9, 7, 8, 10,
        1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7, 5, 6, 6, 
        5, 6, 7, 5, 6, 4, 8, 6, 8, 10};

   // for each answer, select value of an element of array responses
   // and use that value as an index in array frequency to 
   // determine element to increment
   for (size_t answer = 0; answer < RESPONSES_SIZE; ++answer) {
      ++frequency[responses[answer]];
   } 

   // display results
   printf("%s%17s\n", "Rating", "Frequency");

   // output the frequencies in a tabular format
   for (size_t rating = 1; rating < FREQUENCY_SIZE; ++rating) {
      printf("%6d%17d\n", rating, frequency[rating]);
   } 
}

*/
