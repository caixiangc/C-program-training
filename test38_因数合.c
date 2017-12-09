#include <stdio.h>
int main()
{int a,b,c,k;
 //从以下开始答题
for(a=6;a<=5000;a++){
  for(b=0,k=1;k<=a/2;k++){
    if(a%k==0){
      b=b+k;
    }
  }
  for(c=0,k=1;k<=b/2;k++){
    if(b%k==0){
      c=c+k;
    }
  }
  if(a==c && a!=b){
    printf("%6d,%6d\n", a, b);
  }
}
return 0;
}
