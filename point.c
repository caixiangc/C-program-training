#include <stdio.h>
int main(){
  int arr[5] = {0,1,2,3,4};
  int *p;
  p = arr;
  printf("%d %d",*(p+4),*p+4);
}
