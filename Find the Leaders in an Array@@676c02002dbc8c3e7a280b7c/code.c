// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int leaders = arr[n-1];
    printf("%d",leaders);
    for(int i=n-2;i>=0;i--){
            if(arr[i]>leaders ){
                leaders = arr[i];
                printf("%d ",leaders);
            }
    }
}