// display ap  4,7,10,13,16,19....

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);

    // for(int i=4;i<3*n+1;i=i+3  ){
    //     printf("%d \n",i);
    // }

    int a=4;
    for(int i=1;i<=n;i++){
        printf("%d \n",a);
        a=a+3;
    }


    return 0;
}