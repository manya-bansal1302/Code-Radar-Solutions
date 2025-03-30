// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int median ;
    for(int i=0;i<n;i++){
        int low = arr[i];
        int high = arr[n-1];

        int median = (low+high)/2;

        printf("%d",median);
    }
}