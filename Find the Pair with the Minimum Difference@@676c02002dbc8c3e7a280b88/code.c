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
   int subtract = INT_MAX;
   int num1;
   int num2;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
           int sub = abs(arr[j]-arr[i]);
            if(sub<subtract){
                subtract=sub;
                num1 = arr[i];
                num2 = arr[j];
            }
        }
    }
    printf("%d %d",num1,num2);
}