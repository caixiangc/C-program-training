//35  32
//319401
#include <stdio.h>
int main(){
  int person[10][4],n,m,i,j,sel[10],z,biaoji=0;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<4;j++){
      scanf("%d",&person[i][j]);
    }
  }
  scanf("%d",&m);
  for(i=0;i<m;i++){
    scanf("%d",&sel[i]);
  }
  for(i=0;i<m;i++){
    biaoji =0;
    for(j=0;j<n;j++){
      if(sel[i] == person[j][0]){
        for(z=0;z<4;z++){
          if(z==3){
            printf("%d\n",person[j][z]);
          }else{
            printf("%d ",person[j][z]);
          }
        }
        biaoji++;
      }
    }
    if(biaoji==0){
      printf("%d NULL",sel[i]);
    }
  }
  return 0;
}
