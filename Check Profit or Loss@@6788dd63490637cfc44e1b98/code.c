#include <stdio.h>


int main() {
    int num1;
    scanf("%d",&num1);
    int num2;
    scanf("%d",&num2);

    if(num1<num2){
        printf("Profit");
    }
    else if(num1>num2){
        printf("Loss");
    }
    else{
        printf("Profit No Loss");
    }
    return 0;
}