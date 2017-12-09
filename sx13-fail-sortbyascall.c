#include <stdio.h>
int main(){
  char s[3][100];
  int i,j,arr[3],arrindex[3]={0,1,2},sum;

  for(i=0;i<3;i++){
    gets(s[i]);
  }

  for(i=0;i<3;i++){
    sum = 0;
    for(j=0;j<3;j++){
      sum += s[i][j];
    }
    arr[i] = sum;
  }

  int min = arr[0];
  int temp;
  for(i=0;i<3;i++){
    for(j=i+1;j<3;j++){
      if(arr[i]>arr[j]){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
     //交换索引
        temp = arrindex[i];
        arrindex[i] = arrindex[j];
        arrindex[j] = temp;
      }
    }
  }

  printf("numIndex\n");
  for(i=0;i<3;i++){
    printf("%d  ",arrindex[i]);
  }
  printf("\n");

  printf("ascall\n");
  for(i=0;i<3;i++){
    printf("%d  ",arr[i]);
  }
  printf("\n");

  printf("finally-sort\n");
  for(i=0;i<3;i++){
    printf("%s  ",s[arrindex[i]]);
  }


  return 0;
}
