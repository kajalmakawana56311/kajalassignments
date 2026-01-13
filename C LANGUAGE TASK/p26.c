#include <stdio.h>
int main() {
    int base, exponent,i;
    int result = 1;
    
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    
    for (i = 1; i <= exponent; i++) {
    result*=base;
    }
    printf("%d ^ %d = %d", base, exponent, result);
    
}

