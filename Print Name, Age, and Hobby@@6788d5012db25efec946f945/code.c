#include <stdio.h>

int main() {
    char name[100];
    scanf("%c",&name);
    int age;
    scanf("%d",&age);
    char hobby[100];
    scanf("%s",&hobby);
    prinf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %c",hobby);
    return 0;
}