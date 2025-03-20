// Your code here...
#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i =0;i<N;i++){
        scanf("%d",&arr[i]);
    }

    int T;
    scanf("%d",&T);
    
    int target;
  for(int i = 0;i<N;i++){
    if(T == target){
        printf("%d",arr[i]);
    }
  }
}