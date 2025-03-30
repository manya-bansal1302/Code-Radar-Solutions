// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    int leaders = arr[n-1];
    printf("%d ", leaders); // Print the last element first with space

    for(int i=n-2; i>=0; i--){
        if(arr[i] > leaders){
            leaders = arr[i];
            printf("%d ", leaders);  // Print leaders correctly
        }
    }

    return 0;  // This should be correctly placed inside the function
}
