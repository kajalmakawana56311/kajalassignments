#include <stdio.h>
int main() {
    int num, digit, min;

    printf("Enter a number: ");
    scanf("%d", &num);

    min = 9;   // maximum possible digit
    while (num > 0) {
        digit = num % 10;
        if (digit < min) {
            min = digit;
        }
        num = num / 10;
    }
    printf("Minimum digit = %d", min);

    return 0;
}

