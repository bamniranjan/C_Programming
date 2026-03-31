#include <stdio.h>
int main(){
    int dividend,divisor,reminder,quotient;
    printf("Enter the dividend:");
    scanf("%d",&dividend);
    printf("Enter the divisor:");
    scanf("%d",&divisor);

    quotient=dividend/divisor;

    reminder=dividend-(quotient*divisor);
    printf("The remainder is: %d", reminder);
    return 0;
}