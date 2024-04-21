
// Initializing multidimensional arrays.
#include <stdio.h>

void printArray2D(int a[][]); // function prototypes
void printArray3D(int a[][][]);
void printArray3D(int a[][][][]);

// function main begins program execution
int main(void) {
  
   int array1[2][2] = {
        {{1,  2}, {3,  4}};
   puts("Values in array1 by row are:");
   printArray(array1);

   int array2[3][3][3] = {
        {{ 1,  2,  3}, { 4,  5,  6}, { 7,  8,  9}},
        {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}},
        {{19, 20, 21}, {22, 23, 24}, {25, 26, 27}}
   };
  
   puts("Values in array2 by row are:");
   printArray2D(array2);

   int array3[2][2][2][2] = {                        // ChatGPT suggestion, and it seems to make sennse because the 4th dimension is appears to be another set of the first 3 dimensions.
    { // First set of 2x2x2
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
   printArray3D(array3);
}

// function to output array 
void printArray2D(int a[][]) {  
  
   // loop through rows                                    
   for (size_t i = 0; i <= 1; ++i) {                               
                                                              
      // output column values                              
      for (size_t j = 0; j <= 1; ++j) {                            
         printf("%d ", a[i][j]);                        
      }                                                                                            
      printf("\n"); // start new line of output          
   }                                       
} 

// function to output array with two rows and three columns
void printArray3D(int a[][]) {
  
   // loop through rows                                    
   for (size_t i = 0; i <= 1; ++i) {                               
                                                              
      // output column values                              
      for (size_t j = 0; j <= 2; ++j) {                            
         printf("%d ", a[i][j]);                        
      }                                                                                        
      printf("\n"); // start new line of output          
   }                                       
} 


// function to output array with two rows and three columns
void printArray4D(int a[][])                         
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
