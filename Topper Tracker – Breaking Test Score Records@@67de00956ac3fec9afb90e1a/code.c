// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
     
    int initial = arr[n];
    int highest = 0;
    int lowest = 0;

    for(int i=0;i<n;i++){
        if(initial<highest){
            highest++;
        }
        else if(initial>lowest){
            lowest++;
        }
    }
printf("%d %d",highest,lowest);
}