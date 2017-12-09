#include <stdio.h>
int main(){
  int arr[10][100],i,j=0,m,s[10],x,k,temp,min;
  scanf("%d",&m);
  //往一个二维数组中一个一个添加值
  for(i=0;i<m;i++){
    j=0;
    scanf("%d",&x);
    while(x>0){
      arr[i][j++] = x;
      scanf("%d",&x);
    };
    s[i] = j; //j 那个点是不存在的
  }
//  for(i=0;i<m;i++){
//    for(j=0;j<s[i];j++){
//      printf("%d",arr[i][j]);
//    }
//  }
for(i=0;i<m;i++){
  for(j=0;j<s[i];j++){
    min = j;
    for(k=j+1;k<s[i];k++){
      if(arr[i][min]>arr[i][k]){
          min = k;
      }
    }
    temp = arr[i][j];
    arr[i][j] = arr[i][min];
    arr[i][min] = temp;
  }
}
  for(i=0;i<m;i++){
    for(j=0;j<s[i];j++){
      if(j==(s[i]-1)){
        printf("%d\n",arr[i][j]);
      }else{
        printf("%d ",arr[i][j]);
      }
    }
  }

  return 0;
}
