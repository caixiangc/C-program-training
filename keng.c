#include <stdio.h>
void swap(int x,int y){
  int temp;
  temp = x; //外部地址传过来，*x 去改变存储单元内部的值
  x = y;
  y = temp;
}
int main(){
  int x,y;
  //x=6;y=8;
  scanf("%d%d",&x,&y);
  swap(x,y); //这里如果把地址传过去，那么swap必须定义成指针变量
  printf("%d,%d\n",x,y);
  return 0;
}
