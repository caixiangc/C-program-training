#include <stdio.h>
#include <math.h>
int main()
{ int i,w;
  char *s="we45*&y3r#$1";
for(i=0;s[i]!='\0';i++)
 {
   w=(i+1)*s[i];
  printf("%d ",w); }

return 0;
}
