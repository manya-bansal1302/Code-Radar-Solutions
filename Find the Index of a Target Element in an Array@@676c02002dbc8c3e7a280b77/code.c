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
    
    int found = -1;


    for(int i =0;i<N;i++){
        if(T == arr[i]){
        found = -1;
        break;
        }
    }
    printf("%d",found);
}