// wap to find the absolute value of a number.

#include<stdio.h>
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);

    if(num<0){
        num*=(-1 );
    }else{
        num=num;
    }   

    printf("The absolute value of %d is: %d", num, num);
    return 0;

}