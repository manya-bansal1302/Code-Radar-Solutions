// Your code here...
#include <stdio.h>

int main() {
    int n, count = 0;
    scanf("%d", &n);
    
    int arr[n];

    // Input array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check for palindrome numbers
    for (int i = 0; i < n; i++) {
        int num = arr[i], rev = 0, temp = num;
        
        // Reverse the number
        while (temp > 0) {
            rev = rev * 10 + temp % 10;
            temp /= 10;
        }

        // If reversed number is same as original, it's a palindrome
        if (rev == num) {
            count++;
        }
    }

    // Print the count of palindrome numbers
    printf("%d\n", count);

    return 0;
}
