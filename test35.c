#include <stdio.h>
int main()
{ char s[80];
  int i,j;
  gets(s);
  for(i=j=0; i<80 ;i++)
     if(s[i]!='c')
        { s[j]=s[i];
         j++;
		}
	s[j]='\0';
	puts(s);

	return 0;
}
