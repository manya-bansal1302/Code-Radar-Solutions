#include <stdio.h>



int main() {
    
    char check ;
    scanf("%c",check);

    if(check == a,e,i,o,u){
        printf("Vowel");
    }
    else if(check != a,e,i,o,u){
        printf("Consonant");
    }
    else if(check == 0,1,2,3,4,5,6,7,8,9){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}