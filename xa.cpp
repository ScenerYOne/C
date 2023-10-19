#include <stdio.h>
main void deletaElement(int arr[], int n, int p){
    int i;
    for( i=p;i<n-1;i++)
        arr[i]= arr[i+1];
}
int main(){
    int i=p,n;
    int arr[]={5,10,15,20,25};
while (i < n-1){
    arr[i]= arr[i+1];
    i = i + 1;
}
    for(i=0;i<n-1;i++)
        printf("%d",arr[i]);
    return 0;
}
