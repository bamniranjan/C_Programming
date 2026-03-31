#include<stdio.h>
int main(){
    float num, fractional_part;
    printf("Enter afloatingg point number:");
    scanf("%f",&num);

    int y=num;
    printf("The integer part is: %d\n", y);

    fractional_part=num-y;
    printf("The fractional part is: %.2f", fractional_part);
    return 0;
}