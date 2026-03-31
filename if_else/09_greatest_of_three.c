// Greatest among three numbers using if else statement.


#include<stdio.h>
int main(){
    int num1, num2, num3;
    printf("Enter a num1:");
    scanf("%d",&num1);
    printf("Enter a num2:");
    scanf("%d",&num2);
    printf("Enter a num3:");
    scanf("%d",&num3);

    if(num1>num2 && num1>num3){
        printf("%d is a greatest among %d,%d ,%d",num1,num1,num2,num3);
    }else if(num2>num3 && num2>num1){
        printf("%d is greatest among %d, %d, %d",num2 ,num1,num2,num3);
    }else{
        printf("%d is greatest among %d, %d, %d",num3,num1,num2,num3);
    }

    return 0;

}