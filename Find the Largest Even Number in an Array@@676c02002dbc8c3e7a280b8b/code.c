// Your code here...
#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int largestEven = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0 && arr[i]>largestEven){
            largestEven=arr[i];
        }
    }
    if(largestEven==INT_MIN){
        printf("-1\n");
    }
    else{
    printf("%d ",largestEven);
    }
}