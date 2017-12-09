#include <stdio.h>
int main(){
  int arr[100],n,i,j,k;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    arr[i] = i; //data 代表每个人之前的编号
  }
  i=0;
  j=1;
  k = 0;
  while(i<=n && arr[i]!=0){
    if(i==n && k<=n){
      i=k;
      k++;
    }else if(arr[i]!=0){
      i++;
      j++;
    }else if(j==3){
      arr[i] = 0;
      j=1;
    }else{
      printf("%d",arr[i]);
    }
  }
  return 0;
}
