#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    
    int current = 1;
    for(int i=num;i>=1;i--){
        for(int j=i;j<=num;j++){
            printf("%d ", current );
            current++;
        }
        printf("\n");
    }
    return 0;
}