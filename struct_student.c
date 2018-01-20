#include <stdio.h>
struct stud {
  char nam[10];
  int c;
  int math;
  int english;
  int tot;
};
int main(){
  struct stud s[6],t; //这里的s变量是特殊的,代表整个结构体（就行json结构），t也是和s类型一样只不过它长度只有1
  int i,j;
  for(i=0;i<6;i++){
    scanf("%s%d%d%d%d",s[i].nam,&s[i].c,&s[i].math,&s[i].english,&s[i].tot); //这里输入一定要把整个struct()结构里面的变量都输入tot，否者可能要你多输入一行
  }
  for(i=0;i<6;i++){
    s[i].tot = s[i].c+s[i].math+s[i].english;
  }
  for(i=0;i<6;i++){
    for(j=0;j<6;j++){
      if(s[j].tot>s[j+1].tot){
        t = s[j];
        s[j] = s[j+1];
        s[j+1] = t;
      }
    }
  }
  for(i=0;i<6;i++){
    printf("%s %d %d %d %d\n",s[i].nam,s[i].c,s[i].math,s[i].english,s[i].tot);
  }
  return 0;
}
