#include <stdio.h>
int main(){
  int a,b,r;
  a=6;b=8;
  int *p,*q;
  p = &a; q = &b;
  r = *p;*p = *q;*q = r;
  printf("%d %d %d %d \n", a,b,*p,*q);
}
