// Your code here...
#include<stdio.h>
int main(){
    int n ;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int maxFreq = 0;
    for(int i=0;i<n;i++){
        if(int j=i+1;j<n;j++){
            if((arr[i]==arr[j])>=n){
                maxFreq = arr[i];
            }
        }
    }
    printf("%d",maxFreq);
}