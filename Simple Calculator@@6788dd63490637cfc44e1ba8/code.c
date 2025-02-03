#include <stdio.h>
int main(){
    int num1,num2;
    char sign;
    scanf("%d %d %s",&num1,&num2,&sign);

    if( sign == '+'){
        printf("%d", num1+num2);
    }
    else if( sign == '-' ){
        printf("%d", num1-num2);
    }
    else if(sign == '*' ){
        printf("%d", num1*num2);
    }
    else if(sign == '/' ){
        printf("%d", num1/num2);
    }
    else{
        printf("error");
    }
    return 0;
}