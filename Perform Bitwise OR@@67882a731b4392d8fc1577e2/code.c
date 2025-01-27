#include <stdio.h>


int main() {
    int a ;
    scanf("%d",&a);
    int b;
    scanf("%d",&b);
    int result = a+b;

    if(a||b){
        printf("%d",result);
    }
    return 0;
}