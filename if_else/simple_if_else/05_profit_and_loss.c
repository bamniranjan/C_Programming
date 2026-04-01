// wap to find profit and loss

#include<stdio.h>
int main(){
    int cost_price, selling_price,profit,loss;

    printf("Enter the cost price:");
    scanf("%d",&cost_price);
    printf("Enter the selling price:");
    scanf("%d",&selling_price);

    if(selling_price>cost_price){
        printf("You have made a prfit");
        profit=selling_price-cost_price;
        printf("The profit is: %d", profit);
    }else if(selling_price<cost_price){
        printf("You have made a loss");
        loss=cost_price-selling_price;
        printf("The loss is: %d", loss);
    }else{
        printf("There is no profit and no loss");
    }
    return 0;
}