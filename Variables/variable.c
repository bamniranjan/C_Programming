// explain rule to write varible name in c programming language with example
#include<stdio.h>
int main(){
    // variable name should start with a letter or an underscore
    int age=19; // valid variable name
    int _age=20; // valid variable name
    // int 1age=21; // invalid variable name, cannot start with a number

    // variable name should not contain spaces
    // int my age=22; // invalid variable name, contains space
    int my_age=23; // valid variable name, uses underscore instead of space

    // variable name should not be a keyword
    // int int=24; // invalid variable name, 'int' is a keyword
    int myInt=25; // valid variable name

    printf("Age: %d\n", age);
    printf("My Age: %d\n", _age);
    printf("My Age: %d\n", my_age);
    printf("My Int: %d\n", myInt);

    return 0;
}