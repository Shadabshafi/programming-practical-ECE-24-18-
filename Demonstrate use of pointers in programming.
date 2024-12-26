#include <stdio.h>

int main() {
    int a = 10;        
    int *ptr;           

    ptr = &a;           

    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", (void*)&a);

    
    printf("Value of a using pointer: %d\n", *ptr); // Dereferencing the pointer
    printf("Address of a using pointer: %p\n", (void*)ptr);

    
    *ptr = 20;
    printf("\nAfter modifying value using pointer:\n");
    printf("Value of a: %d\n", a);
    printf("Value of a using pointer: %d\n", *ptr);

    return 0;
}
