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
        int num = arr[i];

        if(num<2) continue;;

        int isprime= 1;
        for(int j =2;j*j<=num;j++){
            if(num%j==0){
                isprime =0 ;
                break;
            }
        }
        if(isprime){
            prime++;
        }
    }
    printf("%d",prime);
}