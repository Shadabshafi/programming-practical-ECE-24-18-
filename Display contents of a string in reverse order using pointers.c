#include <stdio.h>
#include <string.h>

void reverseString(const char *str) {
    const char *ptr = str;
    
    
    while (*ptr != '\0') {
        ptr++;
    }
    ptr--;
    while (ptr >= str) {
        putchar(*ptr);
        ptr--;
    }
    putchar('\n');
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    
    size_t len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    printf("Reversed string: ");
    reverseString(str);

    return 0;
}
