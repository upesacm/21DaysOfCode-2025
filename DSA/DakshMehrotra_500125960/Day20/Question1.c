#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
    char name[100];
    int grade;
} Student;

int compare(const void *a, const void *b) 
{
    const Student *studentA = (const Student *)a;
    const Student *studentB = (const Student *)b;
    return studentB->grade - studentA->grade;
}

int main() 
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    
    if (n <= 0) 
    {
        printf("Invalid number of students.\n");
        return 0;
    }
    
    Student students[n];
    for (int i = 0; i < n; i++) 
    {
        printf("Enter student %d's name and grade: ", i + 1);
        scanf("%s %d", students[i].name, &students[i].grade);
    }
    
    qsort(students, n, sizeof(Student), compare);
    
    printf("Sorted students by grade in descending order:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("(%s, %d)\n", students[i].name, students[i].grade);
    }
    
    return 0;
}