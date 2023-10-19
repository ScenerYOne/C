#include <stdio.h>

void deleteElement(int arr[], int n, int pos) {
  int i;
  for (i = pos; i < n - 1; i++)
    arr[i] = arr[i + 1];
}

int main() {
  int n, pos;
  int arr[] = {1, 2, 3, 4, 5};
  n = sizeof(arr) / sizeof(arr[0]);
  printf("Array before deletion: ");
  for (int i = 0; i < n; i++)
    printf("%d ", arr[i]);
  printf("\nEnter the position of element to be deleted: ");
  scanf("%d", &pos);
  if (pos >= 0 && pos < n)
    deleteElement(arr, n, pos);
  else
    printf("Invalid position!\n");
  printf("Array after deletion: ");
  for (int i = 0; i < n - 1; i++)
    printf("%d ", arr[i]);
  return 0;
}