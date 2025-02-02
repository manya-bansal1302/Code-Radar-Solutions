#include <stdio.h>


int main() {
    int costPrice;
    scanf("%d",&costPrice);
    int sellingPrice;
    scanf("%d",&sellingPrice);

    if(costPrice<sellingPrice){
        printf("Profit");
    }
    else if(costPrice>sellingPrice){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}