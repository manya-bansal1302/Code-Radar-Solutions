#include<stdio.h>
int main(){
    int a,b;
    char x;
    scanf("%d %d %c",&a,&b,&x);
    if (x == '+'){
        printf("%d\n",a+b);
    }else if(x == '-'){
        printf("%d\n",a-b);
    }else if (x == '*'){
        printf("%d\n",a*b);
    }else if (b!=0 && x == '/'){
        printf("%d\n",a/b);
    }else{
        printf("error");
    }
    return 0;
}