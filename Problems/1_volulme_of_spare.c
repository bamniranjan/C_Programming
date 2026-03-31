#include<stdio.h>
int main(){
    int radius=5;
    float volume;

    volume=4*3.14*radius*radius*radius/3;
    printf("The volume of the sphere with radius %d is %.2f",radius,volume);  
    return 0;
}