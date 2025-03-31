// Your code here...
#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i =0;i<N;i++){
        scanf("%d",&arr[i]);
    }

      int minimum = 0;
      int maximum = 0;

      for(int i =0;i<N;i++){
        if(arr[i]<minimum){
            minimum = arr[i];
        }
        if(arr[i]>maximum){
             maximum = arr[i];
        }
      }
     printf("%d %d",minimum,maximum);
}