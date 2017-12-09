
#include <stdio.h>
#include <ctype.h>
int main()
{ char a[80];
  int n[3]={0},i=0;
  gets(a);
  //while(a[++n1]);
  while(a[i])
  {
    if(tolower(a[i])>='a' && tolower(a[i])<='z'){
      n[0]++;
    }
    else if ( a[i]>=48&&a[i]<=57){
      n[1]++;
    }
    else{
      n[2]++;
    }
    i++;
  }
  for(i=0;i<3;i++)
     printf("%d,",n[i]);
  return main();
}
