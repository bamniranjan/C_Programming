#include<stdio.h>

int main(){
    printf("Niranjan \nBam");
    // the above line will print the name in two lines because of the escape sequence \n

    printf("I am learning C \t programming language.\n");

    // the above line will print a tab space between C and programming because of the escape sequence \t

    printf("Niranjan \b Bam");
    // the above line will print Niranjan Bam because of the escape sequence \b which is a backspace

    printf("Niranajan \"Bam\"");
    // the above line will print Niranjan "Bam" because of the escape sequence \" which is used to print double quotes

    printf("Niranjan \\ Bam");
    // the above line will print Niranjan \ Bam because of the escape sequence \\ which is used to print a backslash


    return 0;
}