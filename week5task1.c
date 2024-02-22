#include <stdio.h>

int main() {
    char *ptr;
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    
    ptr = alphabet;

    printf("Alphabets: ");
    while (*ptr != '\0') {
        printf("%c ", *ptr);
        ptr++;
    }
    printf("\n");

    return 0;
}