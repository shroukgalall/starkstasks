#include <stdio.h>
void decimalToBinary(int decimal)
{
    if (decimal > 1)({
        decimalToBinary(decimal / 2);
    }
    );printf("%d", decimal % 2);
;}

void main(void)
 {
    int decimal;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    printf("Binary equivalent: ");
    decimalToBinary(decimal);

}