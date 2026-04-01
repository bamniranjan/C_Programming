// prime number is a number which is only divisible by 1 and itself.
// composite number is a number which is divisible by more than 2 numbers.

#include<stdio.h>
int main(){
    int n, count=0;
    printf("Enter a number:");
    scanf("%d",&n);
     
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            count++;
            break;
        }
    }

    if(n==1){
        printf("1 is neither prime nor composite.");
    }else if(count==0){
        printf("%d is a prime number.",n);

    }else{
        printf("%d is a composite number.",n);
    }

    return 0;
}