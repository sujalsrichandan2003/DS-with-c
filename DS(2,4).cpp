#include <stdio.h>

char grade(int marks) {
    if (marks > 90)
        return 'O';
    else if (marks > 80)
        return 'E';
    else if (marks > 70)
        return 'A';
    else if (marks > 60)
        return 'B';
    else
        return 'F';
}

int main() {
    int n;
    printf("Enter number of classes:");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        
        int sub;
        printf("Enter the total number of subjects in class %d:", i + 1);
        scanf("%d", &sub);
        int students;
        printf("Enter number of students in class %d:", i + 1);
        scanf("%d", &students);

        int marks[students][sub];
        for (int j = 0; j < students; j++) {
            printf("Enter marks of student %d:\n", j + 1);
            for (int k = 0; k < sub; k++) {
                printf("Enter marks in subject %d:", k + 1);
                scanf("%d", &marks[j][k]);
            }
        }
        printf("\n");

        printf("Class number %d:\n", i + 1);
        for (int j = 0; j < students; j++) {
            printf("Marks of student number %d:\n", j + 1);
            for (int k = 0; k < sub; k++) {
                printf("Grade of student in sub %d: %c\n", k + 1, grade(marks[j][k]));
            }
        }
    }
    return 0;
}

