// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
struct book{
    char Title[30];
    char Author[30];
    int Publication_Year;
    char ISBN[13];
    float Price;
} Book1;
int main() {
    strcpy (Book1.Title, " introduction to c languange");
    strcpy (Book1.Author, "John smith");
    strcpy (Book1.ISBN, "9780131103627");
    Book1. Publication_Year=2022;
    Book1.Price=49.99;
    
    printf ("Title:%s\n",Book1.Title);
    printf("Author:%s\n",Book1.Author);
    printf("ISBN:%s\n",Book1.ISBN);
    printf("Publication Year:%d\n", Book1.Publication_Year);
    printf("price:%.2f\n", Book1.Price);
  

    return 0;
}