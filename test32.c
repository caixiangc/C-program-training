#include <stdio.h>
int main()
{ char s1[80],s2[40];
  int i=0,j=0;
  scanf("%s%s",s1,s2);
  while(s1[i]!='\0')
  /****1****/
     i+=1;
  while(s2[j]!='\0')
  /****2****/
   s1[i++]=s2[j++];
  s1[i]='\0';
  printf("%s",s1);
return 0;
}
