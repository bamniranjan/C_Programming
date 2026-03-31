// Take input from user using scanf() function

#include<stdio.h>
int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d",&age); // taking input from user and storing it in the variable 'age'

    printf("Your age is %d", age);

    float height;
    printf("\nEnter your height in cm: ");
    scanf("%f",&height); // taking input from user and storing it in the variable 'height'
    printf("Your height is %.2f cm", height);

    return 0;
}