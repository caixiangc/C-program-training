#include <stdio.h>
#include <string.h>
//输出6串字符串，按从小到大排序
int main(){
  char nam[6][20],*b[6],*t;
  int i,j,k;
  for(i=0;i<6;i++){
    b[i] = nam[i]; //把nam[i] 每行首地址给b[i]，相当于复制
  }
  for(i=0;i<6;i++){
    scanf("%s",nam[i]); //然后这里输入nam[],在b数组中也是能提现出来的
  }
  for(i=0;i<6;i++){
    k=i;
    for(j=i+1;j<6;j++){
      if(strcmp(b[k],b[j])>0){ //strcmp(&1,&2)，里面放的是地址
        k = j;
      }
    }
    if(k!=i){
      t = b[i];  //通过交换首地址来替换 家欢整个字符串，如果那样的话要逐个交换
      b[i] = b[k];
      b[k] = t;
    }
  }
  for(i=0;i<6;i++){
    printf("%s\n",b[i]); //这里输出的是要b[],不能nam[]
  }
  return 0;
}
