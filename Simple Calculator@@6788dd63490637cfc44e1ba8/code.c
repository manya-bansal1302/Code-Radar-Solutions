#include <stdio.h>
int main(){
    int num1;
    scanf("%d",&num1);
    int num2;
    scanf("%d",&num2);
    int sign;
    scanf("%d",&sign);

    int sum = num1+num2;
    int subtract = num1-num2;
    int multiply = num1*num2;
    int divide= num1/num2;

    if(num1 + sign == '+' + num2){
        printf("%d",sum);
    }
    else if(num1 + sign == '-' + num2){
        printf("%d",subtract);
    }
    else if(num1 + sign == '*' + num2){
        printf("%d",multiply);
    }
    else if(num1 + sign == '/' + num2){
        printf("%d",divide);
    }
    else{
        print("error");
    }
    return 0;
}