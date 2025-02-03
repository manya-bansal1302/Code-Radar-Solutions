#include <stdio.h>
int main(){
    int num1,num2;
    char sign;
    scanf("%d %d %c", &num1, &num2, &sign);

    if( sign == '+'){
        printf("%d\n", num1+num2);
    }
    else if( sign == '-' ){
        printf("%d\n", num1-num2);
    }
    else if(sign == '*' ){
        printf("%d\n", num1*num2);
    }
    else if(sign == '/' ){
       if(num2!=0){
        printf("%d\n",a/b);
       }
       else{
        printf("error\n");
       }
    }
    else{
        printf("error\n");
    }
    return 0;
}