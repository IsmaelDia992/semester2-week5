#include <stdio.h>
#include <string.h>

int main(void) {
    unsigned long decimal = 0; 
    char hex[0];
    int i = 0;
    int val = 0;

    
    if (scanf("%8s", hex) != 1) {
        return 0;
    }

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

    
    printf("%lu\n", decimal);

    return 0;
}