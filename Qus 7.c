#include <stdio.h>

// Defining the structure
struct Student
{
    char name[50];  // Student's name
    int roll_no;    // Roll number of the student
    int marks[5];   // Array to hold marks of 5 subjects
    float total;    // Total marks
    float average;  //y Average marks
};

int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    // Input data for each student
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d\n", i + 1);

        printf("Enter name: ");
        getchar(); // To consume any newline left by the previous input
        fgets(students[i].name, sizeof(students[i].name), stdin);

        printf("Enter roll number: ");
        scanf("%d", &students[i].roll_no);

        printf("Enter marks for 5 subjects: ");
        int sum = 0;
        for (int j = 0; j < 5; j++) {
            scanf("%d", &students[i].marks[j]);
            sum += students[i].marks[j];
        }

        // Calculate total and average
        students[i].total = sum;
        students[i].average = sum / 5.0;
    }

    // Display results
    printf("\nStudent Details:\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s", students[i].name);
        printf("Roll Number: %d\n", students[i].roll_no);
        printf("Total Marks: %.2f\n", students[i].total);
        printf("Average Marks: %.2f\n", students[i].average);
    }

    return 0;
}
