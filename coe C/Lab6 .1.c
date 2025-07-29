#include <stdio.h>
int sum(int x1,int x2);
int sub(int x1,int x2);
int mul(int x1,int x2);
float div(float x1,float x2);
float result;


void main(){
    int x1,x2;
    printf("Please enter a number:");
    scanf("%d", &x1);
    printf("Please enter a number:");
    scanf("\n%d", &x2);

    printf("\n%d + %d = %d",x1,x2,sum(x1,x2));
    printf("\n%d - %d = %d",x1,x2,sub(x1,x2));
    printf("\n%d * %d = %d",x1,x2,mul(x1,x2));
    printf("\n%d / %d = %2.f",x1,x2,div(x1,x2));

    return 0;
}

int sum(int x1,int x2){
    result = x1 + x2;
    return result;
}

int sub(int x1,int x2) {
    result = x1 - x2;
    return result;
}

int mul(int x1,int x2) {
    result = x1 * x2;
    return result;

}

float div(float x1,float x2) {
    result = x1 / x2;
    return result;

}














