// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        printf("%d",&arr[i]);
    }

    int largestEven = -1;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0) && arr[i]>largestEven{
            largestEven=arr[i];
        }
    }
    printf("%d ",largestEven);
}