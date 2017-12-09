#include <stdio.h>
int main()
{ int i,a,n;
  long t=0;
  /****1****/
   s=0;
  scanf("%d%d",&a,&n);
  for(i=1;i<=n;i++)
    { /****2****/
	 t=t*10+i;
     s=s+t;
	}
	s=s*a;
	printf("%d",s);
return 0;
}

