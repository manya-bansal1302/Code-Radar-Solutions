// Your code here...
#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i =0;i<N;i++){
        printf("%d",&arr[i]);

        if(arr[i]<=arr[N-1]){
            printf("%d %d",arr[0],arr[N-1]);
        }
    }
}