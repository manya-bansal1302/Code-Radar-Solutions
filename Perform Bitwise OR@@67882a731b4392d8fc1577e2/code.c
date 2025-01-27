#include <stdio.h>


int main() {
    int a ;
    scanf("%d",&a);
    int b;
    scanf("%d",&b);
    int result = a+b;

    if(a||b){
        printf("%d/n",result);
    }
    return 0;
}