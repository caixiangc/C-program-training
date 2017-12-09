#include <stdio.h>
int main(){
  int arr[26] = {0},i,j,n=0,arrindex[26]={0},arr1[26],max,temp,fn;
  char input[1000];
  gets(input);
  while(input[n++]!='#');
  n--;
  for(i=0;i<n;i++){
    if(input[i]>='A'&&input[i]<='Z'){
      input[i] +=32;
    }
  }
  for(i=0;i<n;i++){
    if(input[i]>='a'&&input[i]<='z'){
      arr[(input[i]-97)] += 1;
    }
  }
  //测试实例
  printf("first test\n");
  for(i=0;i<26;i++){
    if(arr[i]!=0){
      printf("%c:%d\n",i+97,arr[i]);
    }
  }


  //排序然后生成 索引顺序数组
  for(i=0;i<26;i++){
    max = i;  //把max 设置成i很重要否则排序会乱掉
    for(j=i+1;j<26;j++){
      if(arr[max]<arr[j]){
        max = j;
      }
    }
    temp = arr[i];
    arr[i] = arr[max];
    arr[max] = temp;
    arrindex[i] = max; //索引的排序并不是从1 按数序排的，而是往字幕序号里面插值
  }
  printf("index排序后:\n" );
  for(i=0;i<26;i++){
    if(arr[i]!=0){
      printf("%d\n",arrindex[i]);
    }

  }
  //输出结果
 printf("test result\n" );
  j=0;
  for(i=0;i<26;i++){
    if(arr[i]!=0){
      printf("%c  %d\n",arrindex[j]+65,arr[i]);
      j++;
    }
  }

  return 0;
}
