// Your code here...

#include <stdio.h>

int N;
scanf("%d",&N);
int arr[N];
for(int i =0;i<N;i++){
    scanf("%d\n",&arr[i]);
}
  for(int i = 0;i<N;i++){
   int temp = 0;
   if(temp == arr[i]){
    ptintf("%d",temp);
   }
  }