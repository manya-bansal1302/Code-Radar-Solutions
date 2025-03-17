#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);

    for(int i=1;i<=num;i++){
        int k=1;
        for(int j=num;j>=i;j--){
        printf("%d ", k++);
      }
       printf("\n");
    }
   
    return 0;
}