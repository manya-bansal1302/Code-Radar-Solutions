// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int freq[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        freq[i] = -1;
    }

    for(int i=1;i<n;i++){
     if(freq[i]==-1){
        int count = 1;

        for(int j =0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                freq[j]=0;
            }
        }
        freq[i] = count;
     }
    } 
}