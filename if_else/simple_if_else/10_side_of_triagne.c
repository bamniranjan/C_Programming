// Wap to take input of three sides of triangle and check whether the triangle is valid or not


#include<stdio.h>
int main(){
    int side1,side2,side3;
    printf("Enter the first side of triangle:");
    scanf("%d",&side1);
    printf("enter the second side of triangle:");
    scanf("%d",&side2);
    printf("Enter the third side of triangle:");
    scanf("%d",&side3);

    if((side1+side2)>side3 && (side2+side3)>side1 && (side1+side3)>side2){
        printf("The triangle is valid.");
    }else{
        printf("The triangle is not valid.");

    }
    return 0;
}