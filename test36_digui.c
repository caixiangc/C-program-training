#include <stdio.h>
int jc(int n){
  if(n<=1){
    return 1;
  }else{
    return n*jc(n-1);
  }
}
int main()
{ long s=1,k=1;
  int i;
  for(i=1;i<=12;i++){
    s+=jc(i);
    printf("%d\n",jc(i));
  }
printf("%ld\n",s);
 return 0;
}
