// Your code here...
#include <stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i =0;i<N;i++){
        scanf("%d",&arr[i]);
    }

    int largest = INT_MIN ;
    int slargest = INT_MIN;

    for(int i = 0;i<N;i++){

        if(arr[i]>largest){
            slargest = largest;
            largest = arr[i];
        }

        else if(arr[i]<largest && arr[i]>slargest){
            slargest = arr[i];
        }
    }
    if(slargest == INT_MIN){
        printf("-1\n");
    }
    else{
        printf("%d",slargest);
    }
}