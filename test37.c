#include <stdio.h>
#include <math.h>
int main()
{ int x,y,x1,y1;
  float z,z1;
  //从以下开始答题
  z1 = 10*cos(-4)+5*sin(-2);
for(x=0;x<=10;x++){
  for(y=0;y<=10;y++){
    z = 10*cos(x-4)+5*sin(y-2);
    if(z<z1){
      z1 = z;
      x1 = x;
      y1 = y;
    }

  }
}
printf("%d,%d",x1,y1);
 return 0;
}
