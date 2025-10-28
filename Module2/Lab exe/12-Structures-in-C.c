/*
write a C program that takes two strings from the userand concatenates them
using strcat(). Display the concatenated string and its length using strlen(). 
*/

#include<stdio.h>
int i;

struct Student{
	char name[50];
	int roll;
	float marks;		
};


int main(){
	struct Student s[3];
	
	for(i=0; i<3; i++){
		printf("\nEnter details of student %d:\n", i+1);
		printf("Name:");
		
		scanf("%s",s[i].name);
		printf("Roll Number:");
		
		scanf("%d",&s[i].roll);
		printf("Marks:");
		
		scanf("%f",&s[i].marks);
	}
	
    printf("\n--- Student Details ---\n");
    for(i = 0; i < 3; i++) {
        printf("\nStudent %d\n", i+1);
        printf("Name: %s\n", s[i].name);
        printf("Roll Number: %d\n", s[i].roll);
        printf("Marks: %.2f\n", s[i].marks);
    }

    return 0;	
}

