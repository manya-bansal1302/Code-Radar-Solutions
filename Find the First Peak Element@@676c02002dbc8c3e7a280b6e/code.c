#include <stdio.h>
int main(){
    int N ;
    scanf("%d",&N);
    int arr[N];
    for(int i = 0;i<N;i++){
        scanf("%d",&arr[i]);
    }

    int target = -1;
    for(int i = 0;i<N;i++){
        if((i==0||arr[i]>arr[i-1]) && (i == N-1 || arr[i]>arr[i+1])){
            target = arr[i];
            break;
        }
    }
    printf("%d",target);
}