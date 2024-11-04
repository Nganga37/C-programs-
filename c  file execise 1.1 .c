#include <stdio.h>

struct Student {
    char name[50];
    int marks;
};

int main() {
    FILE *file;
    struct Student students[5];
    file = fopen("students.txt", "w");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read and store details for 5 students
    for (int i = 0; i < 5; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &students[i].marks);
        
        // Write to file
        fprintf(file, "Name: %s, Marks: %d\n", students[i].name, students[i].marks);
    }

    fclose(file);
    printf("Data successfully written to students.txt\n");

    return 0;
}
