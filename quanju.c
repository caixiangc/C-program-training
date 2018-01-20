#include <stdio.h>
int x,y;
void fun(int a){
  int y=2;
  static int b=3;
  a++;
  b+=2;
  x+=3;
  y+=4;
  printf("%d %d %d %d \n",a,b,x,y);
}
int main(){
  int b,c;
  b=c=x=y=3;
  b+=2;c+=3;x+=4;y+=5;
  printf("%d %d %d %d \n",b,c,x,y);
  fun(c);
  printf("%d %d %d %d \n",b,c,x,y);
  fun(c);
  return 0;
}
