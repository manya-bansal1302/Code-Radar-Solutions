// Your code here...
#include <stdio.h>
int main(){
    int num;
    char ch = 'A';
    scanf("%d",&num);
    for(int i = 1 ; i<=num ; i++){
        for(int j = i ; j<=num;j++){
            printf("%c ",ch);
        }
        printf("\n");
    }
}