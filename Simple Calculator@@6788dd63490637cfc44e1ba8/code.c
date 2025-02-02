#include <stdio.h>
int main(){
    int num1;
    scanf("%d",&num1);
    int num2;
    scanf("%d",&num2);

    int sign;
    scanf("%d", &sign);

    if( sign == +){
        printf("%d",num1+num2);
    }
    else if( sign == - ){
        printf("%d",num1-num2);
    }
    else if(sign == * ){
        printf("%d",num1*num2);
    }
    else if(sign == / ){
        printf("%d",num1/num2);
    }
    else{
        printf("error");
    }
    return 0;
}