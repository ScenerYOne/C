#include <stdio.h>
int main (){
    int result, input_number;
    printf("Please enter a number: ");
    scanf("%d", &input_number);
    result = input_number%5;
        if (result == 0)
            printf("The number is multiple of 5");
        else
            printf("The number is not multiple of 5");
    return 0;


}
