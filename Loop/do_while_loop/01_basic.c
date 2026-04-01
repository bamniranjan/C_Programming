// do_while loop is a control flow statement that executes a block of code at least once, and then repeatedly executes the block as long as a specified condition is true. The syntax of a do_while loop in C is as follows:

#include<stdio.h>
int main(){
    int i=1;

    do{
        printf("%d \n",i);
        i++;
    } while(i<=10);
}