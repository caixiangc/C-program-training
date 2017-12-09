#include <stdio.h>
#include <math.h>
int main()
{ int i;
  float x[10]={-1.5,2.1,6.3,3.2,-0.7,7.0,5.1,3.2,4.5,7.6};
  float y[10]={3.5,7.6,8.1,4.5,6.0,1.1,1.2,2.1,3.3,4.4};
  float s=0.0;
  for(i=0;i<10;i++){
  	s += sqrt((fabs(x[i]-1.0))*(fabs(x[i]-1.0))+(fabs(y[i]-1.0))*(fabs(y[i]-1.0)));
  } 
  printf("%.2f",s);
return 0;  
}

