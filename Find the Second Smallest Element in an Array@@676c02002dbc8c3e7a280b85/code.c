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
     
     int smallest = INT_MAX;
     int sSmallest = INT_MAX;

    for(int i=0;i<n;i++){
        if(arr[i]<smallest){
            sSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i]<smallest && arr[i]>sSmallest){
            sSmallest = arr[i];
        }
    }
    printf("%d",sSmallest);
}