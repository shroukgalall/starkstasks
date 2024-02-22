#include <stdio.h>
#include <string.h>

int main() {
    char mainString[100], subString[50];
    int i, j, flag, mainLen, subLen;

    // Input the main string
    printf("Enter the main string: ");
    scanf("%s", mainString);

    // Input the substring
    printf("Enter the substring: ");
    scanf("%s", subString);

    // Find lengths of both strings
    mainLen = strlen(mainString);
    subLen = strlen(subString);

    // Loop through the main string
    for (i = 0; i <= mainLen - subLen; i++) {
        // Check for the substring at current position
        flag = 1;
        for (j = 0; j < subLen; j++) {
            if (mainString[i + j] != subString[j]) {
                flag = 0;
                break;
            }
        }
        // If the substring is found, print the position and exit
        if (flag == 1) {
            printf("The substring '%s' is found at position %d.\n", subString, i + 1);
            return 0;
        }
    }

    // If the substring is not found
    printf("The substring '%s' is not found in the main string.\n", subString);

    return 0;
}