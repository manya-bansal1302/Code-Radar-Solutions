// Your code here...
#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);

    int arr[N];
   for(int i =0;i<N;i++){
    scanf("%d",&arr[i]);
   }

   for(int i =0;i<N;i++){
     int majority ;
     for(int j = i+1;j<N;j++){
        if(arr[i]==arr[j]){
           majority++;
        }
     }
     if(majority>N/2){
        printf("%d\n",arr[i]);
     }
   }
   printf("-1\n");
}