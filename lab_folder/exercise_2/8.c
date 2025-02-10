/* 8.	Write a program to input name, marks of 5 subjects of a student 
and display the name of the student, the total marks scored, percentage scored and the class of result.*/
#include <stdio.h>
#include<string.h>

int main() {
    char name[50];
    int marks[5];
    int total = 0;
    float percentage;
    char classResult[20];

    // Input student name
    printf("Enter student's name: ");
    scanf("%s", name);

    // Input marks for 5 subjects
    printf("Enter marks for 5 subjects: \n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    // Calculate percentage
    percentage = (float) total / 5;

    // Determine class of result
    if (percentage >= 60) {
        strcpy(classResult, "First Class");
    } else if (percentage >= 50) {
        strcpy(classResult, "Second Class");
    } else if (percentage >= 35) {
        strcpy(classResult, "Pass");
    } else {
        strcpy(classResult, "Fail");
    }

    // Display results
    printf("\nStudent Name: %s\n", name);
    printf("Total Marks: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Class: %s\n", classResult);

    return 0;
}
