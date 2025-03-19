// Your code here...
#include <stdio.h>
#include <limits.h> 
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i =0;i<N;i++){
        scanf("%d",&arr[i]);
    }

    int largest = arr[0];
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
    if(slargest == largest){
        printf("-1\n");
    }
    else{
        printf("%d",slargest);
    }
}