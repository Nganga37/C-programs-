// compound interest
#include <stdio.h>
#include <math.h>

int main() {
    float principal,time, rate, compound_interest;
    
    printf("enter value of principal:");
    scanf("%f",&principal );
    
    printf("enter value of rate(in percentange):");
    scanf( "%f", &rate);
    
    printf("enter value of time( in years):" );
    scanf("%f", & time);
    
    compound_interest= principal*pow((1+rate/100),time);
    printf ("compund interest:%f\n" , compound_interest);
    

    return 0;
}