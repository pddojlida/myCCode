// Adapted from "C How to Program" by P. J. Deitel and H. M. Deitel, 8th edition, Pearson
// The original program is below the extended program

#include <stdio.h>

int main(void)
{
	unsigned int x;
	unsigned int y;
	unsigned int s;

  // Explain the function of the program and prompt user for input
  printf("%s", "This program prints a repeated sequence of a custom shaped rectangle.\n");
  printf("%s", "The sequence is as follows.  First, the rectangle is printed with its x and y dimensions normally.\n");
  printf("%s", "Then, the rectangle is printed with its x and y dimensions inverted.\n");
  printf("%s", "This defines a sequence which can be reapeated by providing the target number of repetitions.\n");

  printf("%s", "Enter two unsigned integers in the range 1 to 20 to define the recangle's height (x) and width (y): ");
	scanf("%u%u", &x, &y); // read values for x and y

  printf("%s", "Now enter how many times you would like to see the sequence of rectangles repeat in the range from 1 to 100: ");
	scanf("%u", &s); // read values for x and y

  // Outermost loop determining the number of repetitions of the sequence - note that there is no limit on how many can be printed!
  for (unsigned int h = 1; h <= s; ++h) { // count from 1 to h

            // Normal dimensions loop
	    for (unsigned int i = 1; i <= y; ++i) { // count from 1 to y
	        for (unsigned int j = 1; j <= x; ++j) { // count from 1 to x
			    printf("%s", "@");
		      }
		      puts("");
	    }     

      // Inverted dimensions loop
      for (unsigned int i = 1; i <= x; ++i) { // count from 1 to y
		      for (unsigned int j = 1; j <= y; ++j) { // count from 1 to x
			    printf("%s", "@");
		      }
		      puts("");
    	}
  } // End of outermost loop 
} // End of program


// Original Code
/*
#include <stdio.h>

int main(void)
{
 	unsigned int x;
 	unsigned int y;

	// prompt user for input
	printf("%s", "Enter two unsigned integers in the range 1-20: ");
	scanf("%u%u", &x, &y); // read values for x and y

	for (unsigned int i = 1; i <= y; ++i) { // count from 1 to y

		for (unsigned int j = 1; j <= x; ++j) { // count from 1 to x
			printf("%s", "@");
		}

		puts("");
	} 
} 
*/
