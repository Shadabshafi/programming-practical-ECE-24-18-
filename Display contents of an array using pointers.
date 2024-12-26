#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;

    
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", (ptr + i));
    }

    
    printf("\nArray elements are:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: %d\n", i + 1, *(ptr + i));
    }

    return 0;
}
