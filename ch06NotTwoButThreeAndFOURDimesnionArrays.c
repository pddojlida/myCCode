// Initializing multidimensional arrays.
#include <stdio.h>

void printArray2D(int a[2][2]); // function prototypes
void printArray3D(int a[3][3][3]);
void printArray4D(int a[2][2][2][2]);

// function main begins program execution
int main(void) {
  
   int array1[2][2] = {
        {1,  2}, {3,  4}
   };
   puts("Values in array1 by row are:");
   printArray2D(array1);
   puts("");

   int array2[3][3][3] = {
        {{ 1,  2,  3}, { 4,  5,  6}, { 7,  8,  9}},
        {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}},
        {{19, 20, 21}, {22, 23, 24}, {25, 26, 27}}
   };
  
   puts("Values in array2 by row are:");
   printArray3D(array2);

   int array3[2][2][2][2] = {                        // ChatGPT suggestion, and it seems to make sense because the 4th dimension is appears to be another set of the first 3 dimensions.
    { // First set of 2x2x2                          // Adapted from my code.
        { // First 2x2 in the first 2x2x2
            {1, 2}, // First row in the first 2x2
            {3, 4}  // Second row in the first 2x2
        },
        { // Second 2x2 in the first 2x2x2
            {5, 6}, // First row in the second 2x2
            {7, 8}  // Second row in the second 2x2
        }
    },
    { // Second set of 2x2x2
        { // First 2x2 in the second 2x2x2
            {9, 10}, // First row in the first 2x2
            {11, 12} // Second row in the first 2x2
        },
        { // Second 2x2 in the second 2x2x2
            {13, 14}, // First row in the second 2x2
            {15, 16}  // Second row in the second 2x2
        }
    }
};  
   puts("Values in array3 by row are:");
   printArray4D(array3);
}

// function to output array 
void printArray2D(int a[][2]) {  
  
   // loop through rows                                    
   for (size_t i = 0; i <= 1; ++i) {                               
                                                              
      // output column values                              
      for (size_t j = 0; j <= 1; ++j) {                            
         printf("%d ", a[i][j]);                        
      }                                                                                            
      printf("\n"); // start new line of output          
   }                                       
} 

// Function to output a 3x3x3 array
void printArray3D(int a[][3][3]) {
    // Loop through the first dimension (depth)
    for (int h = 0; h < 3; ++h) {
        printf("Layer %d:\n", h + 1);
        // Loop through the second dimension (rows)
        for (int i = 0; i < 3; ++i) {
            // Output the third dimension values (columns)
            for (int j = 0; j < 3; ++j) {
                printf("%d ", a[h][i][j]);
            }
            printf("\n"); // Start a new line at the end of each row
        }
        printf("\n"); // Add an extra line for separation between layers
    }
}

// Function to output a 4D array with dimensions [2][2][2][2]
void printArray4D(int a[2][2][2][2]) {  // I used chatGPT to solve this problem - the solution seems sound
    // Loop through the first dimension
    for (size_t i = 0; i < 2; ++i) {
        printf("Shell %zu:\n", i + 1);
        // Loop through the second dimension
        for (size_t j = 0; j < 2; ++j) {
            printf("Layer %zu:\n", j + 1);
            // Loop through the third dimension
            for (size_t k = 0; k < 2; ++k) {
                // Output the fourth dimension values
                for (size_t l = 0; l < 2; ++l) {
                    printf("%d ", a[i][j][k][l]);
                }
                printf("\n");  // Start new line of output
            }
            printf("\n");  // Extra line for separation between layers
        }
        printf("\n");  // Extra line for separation between blocks
    }
}



/*

// Fig. 6.21: fig06_21.c
// Initializing multidimensional arrays.
#include <stdio.h>

void printArray(int a[][3]); // function prototype

// function main begins program execution
int main(void)
{
   int array1[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };
   puts("Values in array1 by row are:");
   printArray(array1);

   int array2[2][3] = { 1, 2, 3, 4, 5 };           
   puts("Values in array2 by row are:");
   printArray(array2);

   int array3[2][3] = { { 1, 2 }, { 4 } };         
   puts("Values in array3 by row are:");
   printArray(array3);
}

// function to output array with two rows and three columns
void printArray(int a[][3])                         
{                                                             
   // loop through rows                                    
   for (size_t i = 0; i <= 1; ++i) {                               
                                                              
      // output column values                              
      for (size_t j = 0; j <= 2; ++j) {                            
         printf("%d ", a[i][j]);                        
      }                                    
                                                              
      printf("\n"); // start new line of output          
   }                                       
} 
*/
