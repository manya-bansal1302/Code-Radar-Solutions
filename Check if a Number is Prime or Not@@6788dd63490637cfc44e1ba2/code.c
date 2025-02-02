#include <stdio.h>


int main() {
    int num;
    scanf("%d",&num);

    if(num>1 && num%1==0 && num==2 && num==3){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}