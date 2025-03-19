#include <stdio.h>
int main(){
    int N;
    scanf("%d",N);
     int arr[N];
     scanf("%d",&arr[N]);

     int k ;
     scanf("%d",&k);

     k = k%N;
     for(int i = 0;i<k;i++){
        int temp = arr[N-1];
        for(int j = N-1 ; j>0;j--){
        arr[j] = arr[j-1];
        }
        temp = arr[0];
     }

     for(int i =0 ;i<N;i++){
        printf("%d\n",arr[i]);
     }
}