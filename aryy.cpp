#include <stdio.h>
int main (){
    int values[5];
    printf("please enter 5 integers\n");
        for (int i=0; i<5; ++i) {
            printf("Element %d:",i);
            scanf("%d", &values[i]);

        }
}