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
    for(int i=n-2;i>0;i--){
            if(leaders < arr[i]){
                leaders = arr[i];
                printf("%d",leaders);
            }
    }
}