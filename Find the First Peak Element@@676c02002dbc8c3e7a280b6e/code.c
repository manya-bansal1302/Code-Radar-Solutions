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
        for(int j = i+1;j<N;j++){
            if(arr[i]<=arr[j]){
            target = arr[j];
            }
        }
    }
    printf("%d",target);
}