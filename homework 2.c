#include <stdio.h>
void main(){
int num[5],x,y,temp;
    printf("Enter 5 number\n");
    printf("integer 20 45 30 14 65\n");
    printf("Enter number : ");
    scanf("%d %d %d %d %d", &num[0],&num[1],&num[2],&num[3],&num[4]);

        for(x=0;x<5;x++){
            for(y=x+1;y<5;y++){
                if(num[y] < num[x]){
                    temp = num[x];
                    num[x] = num[y];
                    num[y] = temp;
                }
            }
        }
    printf("\nAfter  number for min to max \n");
    printf("Number is");
        for(x=0;x<5;x++){
            printf("%d",num[x]);
        }
}
