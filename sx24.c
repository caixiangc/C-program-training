#include <stdio.h>
int main(){
  int arr[3][3],i,j,x,sum_m,sum_o;
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      scanf("%d",&x);
      arr[i][j] = x;
    }
  }
  sum_m = arr[0][0]+arr[1][1]+arr[2][2];
  sum_o = arr[0][2]+arr[1][1]+arr[2][0];
  printf("%d %d",sum_m,sum_o);
  return 0;
}
