#include <stdio.h>
#include <stdlib.h> // For abs()

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];

    // Input array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int minDiff = abs(arr[0] - arr[1]);
    int num1 = arr[0], num2 = arr[1];

    // Find the pair with the minimum difference
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int diff = abs(arr[i] - arr[j]);
            if (diff < minDiff) {
                minDiff = diff;
                num1 = arr[i];
                num2 = arr[j];
            }
        }
    }

    // Print the pair with the minimum difference
    if (num1 > num2) {
        printf("%d %d\n", num2, num1);
    } else {
        printf("%d %d\n", num1, num2);
    }

    return 0;
}
