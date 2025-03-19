// Your code here...

#include <stdio.h>
int main(){
int N;
scanf("%d",&N);
int arr[N];
for(int i =0;i<N;i++){
    scanf("%d\n",&arr[i]);
}

  for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (arr[i] == arr[j]) {
                printf("-1\n"); 
                return 0; 
            }
        }
    }



  for(int i = 0;i<N;i++){
  if((i==0|| arr[i]>=arr[N-1]) && ( i == N-1 || arr[i]>=arr[i+1])){
    printf("%d",arr[i]);
    break;
  }
  }
}
