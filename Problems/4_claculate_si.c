// calculate simple interest

#include<stdio.h>
int main(){
    float principal=1000;
    float rate=5;
    float time=2;

    float simple_intersest=(principal*rate*time)/100;

    printf("The simple interest is %.2f",simple_intersest);
    return 0;   
}