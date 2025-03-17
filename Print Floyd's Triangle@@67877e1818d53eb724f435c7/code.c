#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);

    for(int i=num;i>=1;i--){
        for(int j=i;j<=num;j++){
            printf("%d ", i );
        }
        printf("\n");
    }
    return 0;
}