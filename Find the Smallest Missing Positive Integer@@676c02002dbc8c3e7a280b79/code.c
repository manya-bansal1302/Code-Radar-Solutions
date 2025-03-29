// Your code here...
#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);

    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }

    for(int missing = 1 ;;missing++){
       int found= 0;

    for(int i =0;i<N;i++){
       if(arr[i]==missing){
        found = 1;
        break;
       }
    }

    if(!found){
        printf("%d",missing);
        break;
    }
 }
}