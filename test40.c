#include <stdio.h>
int main()
{ int n,i;
  scanf("%d",&n);
  /****1****/
  i=1;
  while(n>1){
    if(n%i==0 && i!=1)
       {printf("%d,",i); n/=i;}
 	else
 	/****2****/
 	   i++;
  }

 return 0;
}
