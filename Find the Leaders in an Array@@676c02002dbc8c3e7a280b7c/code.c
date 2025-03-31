#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n], leaders[n], count = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[n - 1]; 
    leaders[count++] = max; 

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > max) {
            max = arr[i];
            leaders[count++] = max; 
        }
    }

    for (int i = 0; i < count; i++) {
        for (int j = i + 1; j < count; j++) {
            if (leaders[i] > leaders[j]) {
                int temp = leaders[i];
                leaders[i] = leaders[j];
                leaders[j] = temp;
            }
        }
    }

    for (int i = 0; i < count; i++) {
        printf("%d ", leaders[i]);
    }

    return 0;
}
