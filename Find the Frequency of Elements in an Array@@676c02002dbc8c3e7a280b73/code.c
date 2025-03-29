// Your code here...
#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);

    int arr[N];
    for(int i =0;i<N;i++){
        scanf("%d",arr[i]);
    }
    
    int frequency=1;
    for(int i=0;i<N;i++){
        if(arr[i]==-1) continue;
        for(int j=i+1;j<N;j++){
            if(arr[i]==arr[j]){
                frequency++;
                arr[j]= -1;
            }
        }
           printf("%d %d\n",arr[i],frequency);
    }
}