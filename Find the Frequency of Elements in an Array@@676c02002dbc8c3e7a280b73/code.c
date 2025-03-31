// Your code here...
#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);

    int arr[N];
    for(int i =0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<N;i++){
        if(arr[i]==-1) continue;
         int frequency=0;
        for(int j=i+1;j<N;j++){
            if(arr[i]==arr[j]){
                frequency++;
                arr[j]= -1;
            }
        }
           printf("%d %d\n",arr[i],frequency);
    }
}