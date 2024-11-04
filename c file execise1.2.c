#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int marks;
};

int main() {
    FILE *file;
    struct Student student;
    int n;

    file = fopen("students.txt", "a");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", student.name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &student.marks);

        // Append to file
        fprintf(file, "Name: %s, Marks: %d\n", student.name, student.marks);
    }

    fclose(file);
    printf("Data successfully appended to students.txt\n");

    return 0;
}
