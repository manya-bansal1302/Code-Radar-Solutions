// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
   int subtract = -1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
           int sub = arr[j]-arr[i];
            if(sub>subtract){
                subtract=sub;
            }
        printf("%d",subtract);
        return 0;
        }
    }
    printf("\n");
}