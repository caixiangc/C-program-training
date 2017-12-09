#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main() {
   int i,j;
  //从以下开始答题 return 0;
  i=1;
  while(i>0){

    if(i%3==1&&i%5==3&&i%7==5&&i%9==7){
      printf("%d", i);
      break;
    }
    i++;
  }
  return 0;
}
