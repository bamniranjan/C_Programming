#include<stdio.h>

int main(){
// declaring  a float variable
float pi=3.14;
// printing the value of the float variable
printf("The value of pi is %f",pi);

printf("\n");
float x=5;
float y=2;

float result=x/y;
printf("The result of %.2f divided by %.2f is %.2f",x,y,result);



printf("\n");

printf("ans:%d",5/2); // this will give 2 because it will ignore the decimal part and give only the integer part of the result    

return 0;
}