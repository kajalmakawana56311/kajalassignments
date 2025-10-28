#include <stdio.h>

int main() {
    int marks;
    printf("Enter marks (0-100): ");
    scanf("%d", &marks) ;
   

   
    if (marks < 0 || marks > 100) {
        printf("Marks should be between 0 and 100.\n");
        return 1;
    }

    if (marks > 90) {
        printf("Grade: A\n");
    }
    else if (marks > 75 && marks <= 90) {
        printf("Grade: B\n");
    }
    else if (marks > 50 && marks <= 75) {
        printf("Grade: C\n");
    }
    else {  
        printf("Grade: D\n");
    }

    return 0;
}

