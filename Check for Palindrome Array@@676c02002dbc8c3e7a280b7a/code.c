// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int palindrome = 1;
    for(int i=0;i<n/2;i++){
       if(arr[i] != arr[n-1-i]){
        palindrome = 0;
        break;
       }
    }
    if(palindrome){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}