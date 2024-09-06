#include <stdio.h>

// this function will calculate transpose
void trans(int row,int col,int a[row][col],int transpose[row][col]) 
{
    for (int i = 0; i < row; ++i)
       for (int j = 0; j < col; ++j) {
             transpose[j][i] = a[i][j];
           }
}

// function for printing Arrays
void print(int row,int col,int transpose[row][col])
{
   for (int i = 0; i < col; ++i)
      for (int j = 0; j < row; ++j) {
          printf("%d  ", transpose[i][j]);
          if (j == row - 1)
            printf("\n");
  }
}

//main function 
int main() 
{
  system("CLS");
  int row, col;  //declaring row and column
  printf("Enter rows and columns:\n");
  scanf("%d %d", &row, &col); // taking row and column
  int a[row][col], transpose[row][col]; // initializing Arrays for matrix
 
  printf("\nEnter matrix elements:\n");
  for (int i = 0; i < row; ++i) // taking matrix data
  for (int j = 0; j < col; ++j) 
  {
    printf("Enter element a%d%d: ", i + 1, j + 1);
    scanf("%d", &a[i][j]);
  }

   printf("\nEntered matrix: \n");
   print(row, col,a); // function call to print matrix before transpose
   trans(row,col,a,transpose); // function call to calculate transpose
   printf("\nTranspose of the matrix:\n");
   print(row, col,transpose); // printing transport matrix
   return 0;
}
