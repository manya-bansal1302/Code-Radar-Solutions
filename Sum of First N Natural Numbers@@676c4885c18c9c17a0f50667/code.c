#include <stdio.h>



int main() {
   int num;
   scanf("%d",&num);
   int sum=0;
   for(int i=1;i<num;i++){
     if(sum==0){
       printf("%d",sum);
     }
     else{
        printf("%d",sum+1);
     }
    
   }
    return 0;
}