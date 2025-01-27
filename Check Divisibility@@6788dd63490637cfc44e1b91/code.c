#include <stdio.h>


int main() {
    int num1;
    scanf("%d",&num1);
    if(num1 % 5 && num1 % 11){
        printf("Divisible");
    }
    else{
        printf("Not Divisible");
    }
    return 0;
}