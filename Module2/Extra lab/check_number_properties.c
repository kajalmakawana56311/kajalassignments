#include <stdio.h>

int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d",&n);

   
    if (n % 2 == 0) {
        printf("%d is even.\n", n);
    } else {
        printf("%d is odd.\n", n);
    }

    
    if (n > 0) {
        printf("%d is positive.\n", n);
    } else if (n < 0) {
        printf("%d is negative.\n", n);
    } else {
        printf("The number is zero.\n");
    }

    
    if (n % 3 == 0 && n % 5 == 0) {
        printf("%d is a multiple of both 3 and 5.\n", n);
    } else {
        printf("%d is not a multiple of both 3 and 5.\n", n);
    }

    return 0;
}

