#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float num;
    scanf("%f" , &num);
    printf("You entered %f\ln",num);
    return 0;
}