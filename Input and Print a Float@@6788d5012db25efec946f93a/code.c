#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float number = 3.14;
    scanf("%f" , &number);
    printf("You entered %.2f\n",number);
    return 0;
}