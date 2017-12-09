#include <stdio.h>
#include <math.h>
int main()
{ float s=1,t=1,i=3;
 //从以下开始答题
 while(fabs(t)>=0.00001){
   t=t*(-1)/(i*(i-1));
   i+=2;
   s+=t;
 }
 printf("%.2f",s);

return 0;
}
