#include <stdio.h>



int main() {
    
    char ch ;
    scanf("%c",ch);

    if(ch =='a',ch =='e',ch=='i',ch=='o',ch=='u' ||
      ch =='A',ch='E',ch=='I',ch='O',ch=='U')
    {
        printf("Vowel");
    }
    else if(ch!=a,ch!=e,ch!=i,ch!=o,ch!=u && ch!='A',ch!='E',ch!='I',ch!='O',ch!='U'){
        printf("Consonant");
    }
    else if(ch == 0,1,2,3,4,5,6,7,8,9){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}