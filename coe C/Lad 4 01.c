#include <stdio.h>
int main (){
    int i=1, sum=0 , num;
    printf("Enter a positive number:");
    scanf("%d", &num);
    printf("sum of 1-%d is: ",num);
    while (i <= num){
        sum = i+sum;
        ++i;

        }
        printf("This number sum of: %d\n",sum);
}
