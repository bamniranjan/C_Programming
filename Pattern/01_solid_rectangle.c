// *****
// *****
// *****

#include <stdio.h>
int main()
{
  int rows, cols;
  printf("Enter the number of rows and columns: ");
  scanf("%d %d", &rows, &cols);

  // *********.... to n no of stars

  for (int i = 1; i <= rows; i++)
  { // outer loop is for rows or no of lines

    for (int i = 1; i <= cols; i++)
    { // inner loop is for columns or no of stars in each line
      printf("*");
    }
    printf("\n");
  }

  return 0;
}