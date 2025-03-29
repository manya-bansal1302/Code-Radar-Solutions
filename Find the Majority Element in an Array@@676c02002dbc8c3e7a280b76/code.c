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
     int majority = 1 ;
     if(arr[i]== -1) continue;
     for(int j = i+1;j<N;j++){
        if(arr[i]==arr[j]){
           majority++;
           arr[j]== -1;
        }
     }
     if(majority>N/2){
        printf("%d\n",arr[i]);
     }
   }
}