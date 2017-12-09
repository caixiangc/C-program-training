#include <stdio.h>
void transforms(int arr[]){
  int min,max,i,temp;
  min = max = 0;
  for(i=0;i<10;i++){
    if(arr[i]<arr[min]){
      min = i;
    }
    if(arr[i]>arr[max]){
      max = i;
    }
  }
  temp = arr[0];
  arr[0] = arr[min];
  arr[min] = temp;

  temp = arr[9];
  arr[9] = arr[max];
  arr[max] = temp;
}

int main(){
  int arr[10],i = 0;

  while(i<10){
    scanf("%d",&arr[i]);
    i++;
  }
  transforms(arr);//方法传数组不需要指向地址
  for(i=0;i<10;i++){
    printf("%d ",arr[i]);
  }

  return 0;
}
