#include <stdio.h>
float f(float, float *,int);

int main()
{
  float b[5]={1.1,2.2,3.3,4.4,5.5};
  printf("%.2f",f(1.7,b,5));
  return 0;
}

float f(float x,float* a,int n)
{
   float y=a[0],t=1;
   int i;
   for(i=1;i<n;i++)
   {
     t=t*x;
     y=y+a[i]*t;
   }
	return y;
}
//定义的方法要放到main()之前
//如果float* a 是指向地址的那么在传参的时候就不能 f(float a)带括号
//如果直接是把数组传近来  那么需要括号 f(float a[])
#include <stdio.h>

float f(float x,float a[],int n)
{ float y=a[0],t=1;
   int i;
   for(i=1;i<n;i++)
   { t=t*x;
     y=y+a[i]*t;
   }
	return y;
}

int main()
{ float b[5]={1.1,2.2,3.3,4.4,5.5};
  printf("%.2f",f(1.7,b,5));
return 0;
}
