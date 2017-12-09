#include <stdio.h>
#include <math.h>
int main()
{ int i,w;
  char *s="we45*&y3r#$1";
w=0;
while(s[++w]);
for(i=0;i<w;i++){
  s[i] = s[i]*i;
  printf("%d\n",s[i]);
}
for (i = 0; i < w; i++) {
  printf("%s",s[i]);
}
return 0;
}
