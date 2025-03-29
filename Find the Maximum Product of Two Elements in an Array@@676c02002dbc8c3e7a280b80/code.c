// Your code here...
#include<stdio.h>
#include <limits.h> 
int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int maxi = INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int product = arr[i]*arr[j];
            if(product>maxi){
                maxi=product;
            }
        }
    }
    printf("%d",maxi);
}