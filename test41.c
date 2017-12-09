#include <stdio.h>
#include <math.h>
int main()
{ int n,s=0;
  scanf("%d",&n);
  n=fabs(n);
  /****1****/
  while(n>=1)
  { s=s+n%10;
  /****2****/
    n=n/10;
  }
  printf("%d",s);

 return 0;
}
