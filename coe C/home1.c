#include <stdio.h>
int main(){
    int num1,num2,menu;
    printf("Enter num is:");
    scanf("%d", &num1);
    printf("Enter num is:");
    scanf("%d", &num2);
    printf("\nnum1: %d num2: %d",num1,num2);
    printf("\n***** Selrct Funcion (number) *****");
    printf("\n 1.Plus\n 2.minus\n 3.multiply\n");
    scanf("%d", &menu);
    switch(menu){
        case1 :
            printf("\nYour select Plus function\nThe results of %d + %d is: %d",num1,num2,num1+num2);
            break;
        case2 :
            printf("\nYour select Mins function\nThe results of %d - %d is: %d",num1,num2,num1-num2);
            break;
        case3 :
            printf("\nuYour select Multiply function\nThe results of %d x %d is: %d",num1,num2,num1*num2);
            break;
        }
return 0;
}
