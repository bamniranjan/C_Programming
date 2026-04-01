#include<stdio.h>

int main(){
    int x1,y1,x2,y2,x3,y3;
    printf("Enter the coordinates of the first point:");
    scanf("%d%d",&x1,&y1);
    printf("Enter the coordinates of the second point:");
    scanf("%d%d",&x2,&y2);
    printf("Enter the coordinates of the third point:");
    scanf("%d%d",&x3,&y3);

    double m1=(y2-y1)/(x2-x1);
    double m2=(y3-y2)/(x3-x2);

    if(m1==m2){
        printf("The points are on the same straight line.");
    }else{
        printf("The points are not on the same straight line.");
    }
    return 0;
}