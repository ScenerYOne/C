#include<stdio.h>
void main(){
int n;

    printf("Please enter number of element: ");
    scanf("%d",&n);

    int maxs[n];
    int i;

        printf("Please input all number\n");
        for(i=0;i<n;i++){
            printf("Number %d : ", i);
            scanf("%d", maxs[i]);
        }
    printf("\nReverse all number\n");
    for(i=n-1;i>=0;i--){
        printf("%d\n", maxs[i]);
        }
}
