// Your code here...
#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i = 0;i<N;i++){
        scanf("%d",&arr[i]);
    }

    int prime = 0;
    for(int i =0;i<N;i++){
        if(i > 1 || i%i == 0 || i%2 == 0 || i%3==0||i%5==0||i%7==0 ){
            prime++ ;
        }
    }
    printf("%d",prime);
}