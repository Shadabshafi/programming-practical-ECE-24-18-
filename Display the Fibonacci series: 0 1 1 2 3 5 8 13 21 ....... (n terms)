#include <stdio.h>

void fibonacci(int n) {
    int a = 0, b = 1, next;
    
    printf("Fibonacci series: ");
    
    for (int i = 0; i < n; i++) {
        if (i == 0)
            printf("%d ", a);
        else if (i == 1)
            printf("%d ", b);
        else {
            next = a + b;
            printf("%d ", next);
            a = b;
            b = next;
        }
    }
    printf("\n");
}

int main() {
    int n;
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    fibonacci(n);
    
    return 0;
}
