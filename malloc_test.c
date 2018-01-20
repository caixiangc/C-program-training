#include <stdio.h>
#include <stdlib.h>
int main(){
  int *p,i,n;
  scanf("%d",&n);
  //要是p是一个数组，p[10] 那么p就是表示首地址
  //但是这里p是这个指针变量，p还是一个变量不是地址
  p = (int *)malloc(n*sizeof(int));
  for(i=0;i<n;i++){
    //scanf("%d",(p+i));
    //可以使用表达式p[0]来表示第一个元素，p[1]表示第二个
    //所以这里输入地址的时候，要加入地址符号
    scanf("%d",&p[i]);
  }
  for(i=(n-1);i>=0;i--){
    //printf("%d  ",p[i]);
    printf("%d  ",*(p+i));
  }
  return 0;
}
