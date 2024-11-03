
// grading system for zetech
#include <stdio.h>

int main() {
int programming,basic_maths,communications_skills;
float avereage;

printf("enter score for programming:");
scanf("%d", &programming);

printf("enter score for basic maths:");
scanf("%d", &basic_maths);

printf("enter score for communication skills:");
scanf("%d", &communications_skills);

avereage=(programming+basic_maths+communications_skills)/3;
printf(" your average score is:%.2f\n", avereage);


 if (avereage >= 70 && avereage <= 100) {
        printf("Grade: A\n");
    } else if (avereage >= 60 && avereage < 70) {
        printf("Grade: B\n");
    } else if (avereage >= 50 && avereage < 60) {
        printf("Grade: C\n");
    } else if (avereage >= 40 && avereage < 50) {
        printf("Grade: D\n");
    } else {
        printf("Grade: E (Fail)\n");
    }
    

    return 0;
}
