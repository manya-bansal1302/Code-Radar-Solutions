// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }


    for(int i=0;i<n;i++){
        if(arr[i]==0){
            arr[n-1]=0;
        }
    }
    printf("%d",arr[n-1]);
}