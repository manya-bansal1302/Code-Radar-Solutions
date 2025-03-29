// Your code here...
#include<stdio.h>
int main(){
int n,k;
scanf("%d %d ",&n, &k);

int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[n]);
}

 int elements;
for(int i=0;i<n;i++){
    if(arr[i]>k){
     elements = arr[i];
    }
    printf("%d",elements);
 }
}