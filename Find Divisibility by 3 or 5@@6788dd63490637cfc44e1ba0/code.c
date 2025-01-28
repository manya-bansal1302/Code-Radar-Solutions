#include <stdio.h>

int main() {
    int num;
    printf("%d",&num);

    if(num%3==0 && num%5==0){
        printf("Both");
    }
    else if(num%3==0){
        printf("Divisible by 3");
    }
    else if(num%5==0){
        printf("Diviible by 5");
    }
    else{
        printf("Not Divisible");
    }
    return 0;
}