#include <stdio.h>
int main(){
  int arr[10],i,j,comp,temp,x;

  i=0;
  while(i<10){
    scanf("%d",&x);
    arr[i] = x;
    i++;
  }
//选择排序

  for(i=0;i<10;i++){
    comp = i;
    for(j=i;j<10;j++){
      if(arr[comp]>=arr[j]){
        comp = j;
      }
    }
    temp = arr[i];
    arr[i] = arr[comp];
    arr[comp] = temp;
  }

  for(i = 0;i<10;i++){
    printf("%d\n",arr[i]);
  }
  return 0;
}
