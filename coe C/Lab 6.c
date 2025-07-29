#include <stdio.h>

long factorial_(int);

void main(){
    int number;
    printf("Please enter a nuber:");
    scanf("%d", &number);
    long result = factorial_(number);
    printf("Factorial of %d is %1d", number , result);
}

long factorial_(int number){
    long fac = 1;
    for (int i=number; i>1; --i)
        fac = fac *i;

        return fac;
    }
