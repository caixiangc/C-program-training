#include <stdio.h>
int main(){
  int m,n,mid,i,max_gy,min_bs,max;
  scanf("%d%d",&m,&n);
  if(m<n){
    mid = m;
    max = n;
  }else{
    mid = n;
    max = m;
  }

  for(i = 1;i<=mid/2;i++){
    if(m%i==0&&n%i==0){
      max_gy = i;
    }
  }

  while(max){
    if(max%m==0&&max%n==0){
      min_bs = max;
      break;
    }
    max++;
  }
  printf("%d %d", max_gy,min_bs);

  return 0;
}
