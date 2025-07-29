#include <stdio.h>
int main (){
    int  i,sum=1,num;
    printf("Enter number of \n:");
    scanf("%d", &num);
    printf("factorial of number %d is:\n",num);
        for (i=num;i>=1; --i){
            sum =sum*i;
            }
        printf("this factorisl of number are: %d\n",sum);
}
