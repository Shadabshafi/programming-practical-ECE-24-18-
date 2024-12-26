#include <stdio.h>
#include <string.h>  

int main() {
    
    char str1[100] = "Hello, ";
    char str2[] = "World!";
    char str3[100];
    char str4[] = "hello, world!";
    char str5[] = "Hello, World!";

    
    printf("Length of str1: %lu\n", strlen(str1));

    
    strcpy(str3, str1);
    printf("str3 after strcpy(str1): %s\n", str3);

    
    strcat(str1, str2); 
    printf("str1 after strcat(str2): %s\n", str1);  


    int result = strcmp(str4, str5); 
    if (result == 0) {
        printf("str4 and str5 are identical.\n");
    } else if (result < 0) {
        printf("str4 is less than str5.\n");
    } else {
        printf("str4 is greater than str5.\n");
    }

    return 0;
}
