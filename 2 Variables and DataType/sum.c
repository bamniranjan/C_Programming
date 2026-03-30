#include<stdio.h>
int main(){
    int num1, num2, sum;
    printf("Enter first NUmber :\n");
    scanf("%d",&num1);

    printf("Enter second Number:\n");
    scanf("%d",&num2);

    sum=num1+num2;
    printf("THe sum of  %d and %d is : %d", num1,num2, sum);
    return 0;
    
}