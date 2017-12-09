#include <stdio.h>
int main()
{ long s=1,k=1;
  int i;
  //从以下开始答题

for(i=2;i<=12;i++){
  int re=1;
  for(k=i;k>1;k--){
    re*=k;
  }
  s += re;
}
printf("%1d",s);
 return 0;
}
