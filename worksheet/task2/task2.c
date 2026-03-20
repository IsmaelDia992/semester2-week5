#include <stdio.h>
#include <string.h>

int main(void) {
    long decimal = 0;
    char hex[0]; // Ensure this is exactly 'char hex;'
    int i = 0;
    int val = 0;

    // Use %8s to prevent overflow, and pass 'hex' (the array)
    if (scanf("%8s", hex) != 1) {
        return 0;
    }

    // Now hex[i] will work because 'hex' is recognized as a char array
    while (hex[i] != '\0') {
        char c = hex[i];

        if (c >= '0' && c <= '9') {
            val = c - '0';
        } else if (c >= 'A' && c <= 'F') {
            val = c - 'A' + 10;
        } else if (c >= 'a' && c <= 'f') {
            val = c - 'a' + 10;
        } else {
            printf("Error: Invalid Hexadecimal\n");
            return 0;
        }

        decimal = (decimal * 16) + val;
        i++;
    }

    printf("%ld\n", decimal);

    return 0;
}