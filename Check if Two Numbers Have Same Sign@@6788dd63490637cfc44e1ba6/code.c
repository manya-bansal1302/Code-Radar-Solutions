#include <stdio.h>



int main() {
   int num1;
   scanf("%d",&num1);
   int num2;
   scanf("%d",&num2);

   if((num1>0 && num2>0) || (num1<0 && num2<0)){
    printf("Same Sign");
   }
   else{
    printf("Different Sign");
   }
    return 0;
}