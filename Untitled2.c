#include <stdio.h>
int main(){
    int sea[100],i,x,min,max;
    printf("Enter number of the array : ");
    scanf("%d",&x);

    printf("Enter elements in array : \n");
    for(i=0; i<x; i++){
        scanf("%d", &sea[i]);
    }

    min = max = sea[0];
    for(i=1; i<x; i++){
        if(min>sea[i])
            min=sea[i];
                if(max<sea[i])
                    max=sea[i];
    }

    printf("min of array is : %d",min);
        printf("\nmax of array is : %d",max);

    return 0;

}

































