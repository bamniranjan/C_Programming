// 1
// 1 3
// 1 3 5
//  1 3 5 7

#include <stdio.h>
int main()
{
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++)
    {
        int num = 1;
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", num);
            num += 2;
        }
        printf("\n");
    }
    return 0;
}