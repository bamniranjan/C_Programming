
// continue statement is used to skip the current iteration of the loop and move to the next iteration. In this example, we are printing only odd numbers from 1 to 10. When the loop encounters an even number, it will skip the rest of the code inside the loop and move to the next iteration.
#include<stdio.h>
int main(){
    for(int i=1;i<=10;i++){
        if(i%2!=0){
            continue;
        }
        printf("%d \n",i);
    }
}