#include <stdio.h>


int main() {
   char c;
   scanf("%c",&c);

   if(c>='A' && c<='Z'){
    prinf("Uppercase");
   }
   else{
    printf("Lowercase");
   }
   return 0;
}