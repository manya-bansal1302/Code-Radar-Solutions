// Your code here...
#include<stdio.h>
int main(){
int n,k;
scanf("%d %d",&n, &k);

int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}

 int elements = 0;
for(int i=0;i<n;i++){
    if(arr[i]>k){
     elements++;
    }
    printf("%d",elements);
  }
}