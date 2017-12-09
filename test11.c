#include <stdio.h>
#include <math.h>
int main()
{float nz=1,t=1,pi=0;
   int i;
 	i=1;
  while( fabs(t) >=1e-6)
  {
  	pi+=t;
    nz=-nz;
    i+=2;
    t=nz/i;
  }
  pi*=4;
  printf("%.4f\n",pi);

 return 0;
}
