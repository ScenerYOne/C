#include <stdio.h>
    int main (){
    int arrsize, element, position,arr[0];
        printf(" Enter array size");
        printf("Array size :");
        scanf("%d",&arrsize);

        printf("Enter number in array\n");
        scanf("%d",&arrsize);

        while(element<arrsize) {
            printf("Number : %d\n",element);
            element++;
        }
            printf("\nEnter position for delete");
            printf("delete position :");
            scanf("%d",&position);

            while (element<arrsize) {
                printf("element =%d",element);
                arr[10]= arr[10+1];
                element = position + 1;
                element++;
        }
            printf("After delete position = %d ",element);
            return 0;

            for (element = 0; element<arrsize-1;element++){
            arrsize = arrsize - 1;
            printf(" %d\t",arr[element]);
            }
 return 0;



}
