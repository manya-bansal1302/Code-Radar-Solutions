#include <stdio.h>



int main() {
   int a;
   scanf("%d",&a);
   int b;
   scanf("%d",&b);
   int c;
   scanf("%d",&c);

   if(a+b>c && a+c>b && b+c>a){
    printf("Valid");
   }
   else{
    printf("Invalid");
   }
    return 0;
}