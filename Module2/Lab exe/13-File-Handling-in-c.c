//Write a C program to create a file, write a string into it, close the file, 
   // the open the file again to read and display its contents //

#include <stdio.h>

int main() {
    FILE *fp;           
    char str[100];
    
    fp = fopen("example.txt", "w");
    
    if (fp == NULL) {   
        printf("Error opening file!\n");
        return 1;
    }
    
    printf("Enter a string to write into the file: ");
    fgets(str, sizeof(str), stdin);
    
    fputs(str, fp);
    
    fclose(fp);
    printf("Data written successfully.\n");
    
    fp = fopen("example.txt", "r");

    if (fp == NULL) {  
        printf("Error opening file for reading!\n");
        return 1;
    }
    
    printf("\nFile contents:\n");


    while (fgets(str, sizeof(str), fp) != NULL) {
        printf("%s", str);
    }

    fclose(fp);

    return 0;
}
