#include <stdio.h>
int main (){
    int i=1, sum=1,num;
    printf("Enter number of \n:");
    scanf("%d", &num);
    printf("factorial of number %d is:\n",num);
        while(i<=num){
            sum =sum*num;
            --num;
        }
        printf("this factorisl of number are: %d\n",sum);
}
