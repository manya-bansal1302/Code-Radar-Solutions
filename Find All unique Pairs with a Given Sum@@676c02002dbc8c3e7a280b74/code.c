// Your code here...
#include <stdio.h>

int main() {
    int n, sum;
    scanf("%d", &n);
    
    int arr[n];

    // Input array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input target sum
    scanf("%d", &sum);

    // Find unique pairs
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == sum) {
                printf("%d %d\n", arr[i], arr[j]);

                // // Mark duplicates as invalid to avoid repeating the same pair
                // for (int k = j + 1; k < n; k++) {
                //     if (arr[k] == arr[j]) {
                //         arr[k] = -99999;  // Mark as invalid
                //     }
                // }
            }
        }
    }

    return 0;
}
