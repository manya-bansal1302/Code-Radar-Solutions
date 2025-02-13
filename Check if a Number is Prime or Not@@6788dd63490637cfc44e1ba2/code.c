#include <stdio.h>


int main() {
    int num;
    scanf("%d",&num);

    if(num>2 && num%1==0  && num%2==0 || num%3==0 || num%5==0 ){
        printf("Not Prime");
    }
    else{
        printf("Prime");
    }
    return 0;
}