#include <stdio.h>
#include <stdlib.h>
struct emp{
    char name[20];
    int no;
    float pay;
};
void inputs(struct emp a[],int n) {
  /* code */
  int i;
  for(i=0;i<n;i++){
    scanf("%s%d%f",a[i].name,&a[i].no,&a[i].pay);
  }
}

void sort(struct emp a[],int n) {
  /* code */
  int i,j;
  struct emp t;
  for(i=0;i<n;i++){
    for(j=0;j<(n-1-i);j++){
      if(a[j].pay<a[j+1].pay){
        t = a[j];
        a[j] = a[j+1];
        a[j+1] = t;
      }
    }
  }
}
void printfs(struct emp a[],int n){
  int i;
  for(i=0;i<n;i++){
    printf("%s %d %.1f\n",a[i].name,a[i].no,a[i].pay);
  }
}
int main(){
  struct emp *w; //这里的*w 就是用来指向我们后面动态分配空间的首地址
  int n;
  scanf("%d",&n);
  //
  //malloc 返回值 是void* 类型的（表明喂确定类型的指针），malloc找到分配的内存是匿名的,因此需要一个接受指针变量来接受，它的首地址
  //(struct emp*) 强制数据类型转换，n 是表明你要产生几个数据，sizeof(struct emp)你要动态分配的数据类型。
  //****可以用数组名来表示指针，也可以用指针来表示数组
  w = (struct emp*)malloc(n*sizeof(struct emp)); //动态分配地址，分配后是一个数组的形式
  inputs(w,n);
  sort(w,n);
  printfs(w,n);
  return 0;
}
