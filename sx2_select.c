#include <stdio.h>
int main(){
  int n,arr[5],i,m,k,z,j,temp,comp;
  scanf("%d",&n);
  m = n;
  while(m>0){
    k+=1;
    m/=10;
  }
  printf("%d\n",k);
  for(i=0;i<5;i++){

    if(n>0){
      z = n%10;
      arr[i] = z;
      n/=10;
    }else{
      break;
    }
  }
  for(i=(k-1);i>=0;i--){
    printf("%d ",arr[i]);
  }
  printf("\n");

  for(i=0;i<k;i++){
    comp = i;
    for(j=i+1;j<k;j++){
      if(arr[comp]<arr[j]){
        comp = j;
      }
    }
    temp = arr[i];
    arr[i] = arr[comp];
    arr[comp] = temp;
  }
  for(i=0;i<k;i++){
    printf("%d",arr[i]);
  }
  return 0;
}
