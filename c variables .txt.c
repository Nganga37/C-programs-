//  C variables and Datatypes//
// preprocessor directive
#include <stdio.h>
int main() {
    char a ;
    char name[5]={};
    int age;
    float area;
    double allowances;
    printf( "enter the character:");
    scanf( "%c",&a );
    printf( "The character is: %c \n" , a);
    
    printf("Enter your name:");
    scanf("%s",&name);
    printf("The name is: %s\n",name);
    
    printf("enter your age:");
    scanf("%d", &age);
    printf("The age is: %dyrs\n",age);
    
    printf( "enter the area of the object");
    scanf("%f", &area);
    printf( "The area of the object is: %.3fcm^2\n" ,area);
    
    printf("enter your allowances:");
    scanf("%lf", &allowances);
    printf ("The allowances is: %10.3lf ksh\n" , allowances);
    
    return 0;
}
