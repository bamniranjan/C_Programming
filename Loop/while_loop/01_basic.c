// while loop is used when we don't know the number of iterations in advance. It continues to execute a block of code as long as a specified condition is true.

#include<stdio.h>
int main(){
    int i=1;
    while(i<=10){
        printf("%d \n",i);
        i++;                
    }
    return 0;
}