// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

        int i;
        if(arr[i]>=arr[n-1] && arr[i]<arr[n-1]){
            printf("YES");
        }
        else{
            printf("NO");
        }
    }
