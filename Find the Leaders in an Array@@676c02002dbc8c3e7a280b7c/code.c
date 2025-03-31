#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    
   
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Start checking leaders from the rightmost element
    int max = arr[n - 1]; 
    printf("%d ", max); // Rightmost element is always a leader

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > max) {
            max = arr[i];
            printf("%d ", max);
        }
    }
    
    return 0;
}
Loading Code...