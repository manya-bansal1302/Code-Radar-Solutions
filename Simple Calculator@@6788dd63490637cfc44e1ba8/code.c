#include <stdio.h>
int main(){
    char sign;
    int num1;
    scanf("%d",&num1);
    int num2;
    scanf("%d",&num2);

    getchar();
    scanf("%c",&sign);

    if( sign == '+'){
        printf("%d",num1+num2);
    }
    else if( sign == '-' ){
        printf("%d",num1-num2);
    }
    else if(sign == '*' ){
        printf("%d",num1*num2);
    }
    else if(sign == '/' ){
        printf("%d",num1/num2);
    }
    else{
        printf("error");
    }
    return 0;
}