#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, world!";
    char substr[] = "world";
    
    // Use strstr  find the first occurrence of "world"
    char *result = strstr(str, substr);
    
    if (result) {
        // Calculate position by subtracting the base address of the string from the result
        int position = result - str;
        printf("Substring found at position: %d\n", position);
    } else {
        printf("Substring not found.\n");
    }

    return 0;
}
