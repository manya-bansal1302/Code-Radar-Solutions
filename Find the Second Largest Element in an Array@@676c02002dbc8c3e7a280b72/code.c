// Your code here...
#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i =0;i<N;i++){
        scanf("%d",&arr[i]);
    }

    int largest = arr[0];
    int slargest = arr[0];

    for(int i = 0;i<N;i++){

        if(arr[i]>largest){
            largest = arr[i];
            slargest = largest;
        }

        if(arr[i]<largest && arr[i]>slargest){
            slargest = arr[i];
        }
    }
    printf("%d",slargest);
}