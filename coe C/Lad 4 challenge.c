#include<stdio.h>
int main (){
    int num, i=1;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Factors of %d are:", num);

        for(i=0; i<=num; ++i){
           if (num % i==0)
            printf("%d", i);
        }
    return 0;
}
