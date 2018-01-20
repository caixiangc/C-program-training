#include <stdio.h>
#include <string.h>
int main(){
	char s[100],t,z=0,n;
	int i,k;
	gets(s);
	k=strlen(s)-1;
	t=s[0];
for(i=0;i<k-1;i=i+2)
{
	z=t;
	t=s[i+2];
  s[i+2]=z;
	n=n+2 ;
	if(n>=k-2)
	{
		s[0]=t;
	}
}
	printf("%s",s);
	return 0;
}
