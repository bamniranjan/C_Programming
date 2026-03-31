#include<stdio.h>

int main(){
    int num1, num2, sum,difference,product,remainder;
    float quotient;

    printf("Enter the first number:");
    scanf("%d",&num1);
    printf("Enter the second number:");
    scanf("%d",&num2);

    sum=num1+num2;
    difference=num1-num2;
    product=num1*num2;
    quotient=(float)num1/num2;
    remainder=num1%num2;
    printf("The sum is: %d\n", sum);
    printf("The difference is: %d\n", difference);
    printf("The product is: %d\n", product);
    printf("The quotient is: %.2f\n", quotient);
    printf("The remainder is: %d", remainder);
    return 0;
    
}