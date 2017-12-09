#include <stdio.h>
#include <string.h>
void judge(int n,char s[],char s1[]){
  int i,j=0;
  for(i=0;i<=n;i++){
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
        s1[j] = s[i];
        j++;
    }
  }
  s1[j]='\0';//加上个结束符是很重要的
}
int main(){
  char s[100];
  char s1[100];
  scanf("%s",s);
  int n =0;
  while(s[n]){
    n++;
  }
  n--;
  judge(n,s,s1);
  //因为字符串是指针变量，是指向内存的所以不能直接用比较int 的方式来比

  printf("%s\n",s1);
  return 0;
}
