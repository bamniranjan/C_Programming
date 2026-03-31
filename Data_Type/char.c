
#include<stdio.h>
int main(){
    char ch ,sym;
    printf("Enter a character:");
    scanf("%c",&ch);
    printf("Enter a symbol:");
    scanf(" %c",&sym);


    printf("The ASCII value of %c is: %d", ch, ch);
    printf("\n");
    
    printf("The ASCII value of %c is: %d", sym, sym);
    return 0;
}