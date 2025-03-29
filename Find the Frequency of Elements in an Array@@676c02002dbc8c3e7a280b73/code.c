// Your code here...
#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);

    int arr[N];
    for(int i =0;i<N;i++){
        scanf("%d",arr[i]);
    }
    
    int frequency;
    for(int i=0;i<N;i++){
        for(int j=i;j<N;j++){
            if(arr[i]==arr[j]){
                frequency++;
            }
        }
    }
    printf("%d %d",arr[i],frequency);
}