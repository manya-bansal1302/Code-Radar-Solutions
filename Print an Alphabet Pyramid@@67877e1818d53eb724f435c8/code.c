// Your code here...
#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    for(int i = 1 ;i<=num;i++){
        char ch = 'A';
        for(int j = 1; j<=num;j++){
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
}