#include <stdio.h>
#include <stdlib.h>

int x;
int arr[5];

int main(){
  printf("%lu\n", sizeof(x));
  printf("%lu\n", sizeof(arr));
  printf("%d\n", arr[1]);
  printf("%d\n", arr[2]);
  printf("%d\n", arr[3]);
  printf("%d\n", arr[4]);
}
