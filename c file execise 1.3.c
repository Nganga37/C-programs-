#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int marks;
};

int main() {
    FILE *file;
    struct Student students[5];
    struct Student students_from_file[5];
    int n = 5;

    // Open file for writing
    file = fopen("C:\\Users\\hp\\Desktop\\New folder (2)\\students.dat", "wb");
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    // Populate array and write to file
    for (int i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &students[i].marks);
    }
    fwrite(students, sizeof(struct Student), n, file);
    fclose(file);
    printf("Data written to students.dat\n");

    // Open file for reading
    file = fopen("students.dat", "rb");
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    fread(students_from_file, sizeof(struct Student), n, file);
    fclose(file);

    // Display read data
    printf("Data read from students.dat:\n");
    for (int i = 0; i < n; i++) {
        printf("Name: %s, Marks: %d\n", students_from_file[i].name, students_from_file[i].marks);
    }

    return 0;
}
