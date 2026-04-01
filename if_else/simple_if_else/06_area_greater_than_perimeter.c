#include<stdio.h>
int main(){
    int area, perimeter, length, breadth;
    printf("Enter the length of the rectangle:");
    scanf("%d",&length);
    printf("Enter the breadth of the rectangle:");
    scanf("%d",&breadth);

    area=length*breadth;
    perimeter=2*(length+breadth);

    if(area>perimeter){
        printf("The area is greater than the perimeter.");
    }else{
        printf("The area is not greater than the perimeter.");
    }
    return 0;
    
}