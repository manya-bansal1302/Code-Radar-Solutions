#include <stdio.h>
int main(){
    int N ;
    scanf("%d",&N);
    int arr[N];

    for(int i = 0; i<N;i++){
        scanf("%d\n",&arr[i]);
    }

    for(int i = 0;i<N;i++){
        printf("%d\n",arr[i]);
    }

    int k;
    scanf("%d",&k);


    k = k%N;

    for(int i = 0;i<k;i++){
        int temp = arr[N-1];

        for(int j = N-1 ; j>0;j--){
            arr[j] = arr[j-1];
        }
        arr[0] = temp;
    }

    for(int i =0;i<N;i++){
        printf("%d\n",arr[i]);
    }
    printf("\n");

    return 0;
}