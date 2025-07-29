#include <stdio.h>
int main (){
    int i=1, sum=0 , num;
    printf("Enter a positive number:\n");
    scanf("%d", &num);
    printf("sum of 1-%d is: ",num);
        for (int i=1;i<=num; ++i){
                sum = sum +i;
        }
        printf("This number sum of: %d\n",sum);
}
