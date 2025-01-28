#include <stdio.h>


int main() {
    int num;
    scanf("%d",&num);
    if(num<=1){
        printf("Not Prime");
    }
    for(int i=1;i<num;i++){
        if(i%1==0 && i%num==0){
            printf("Prime");
        }
    }
    return 0;
}