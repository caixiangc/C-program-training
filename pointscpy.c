#include <stdio.h>
void sstrcpy(char *s1,char *s2){
  while(*s1){
    *s2 = *s1;
    s2++;
    s1++;
  }
  *s2='\0';
  //while(*s2++=*s1++);
}
int main(){
  char s1[100],s2[100];
  scanf("%s%s",s1,s2);
  sstrcpy(s1,s2);
  puts(s1);
  puts(s2);
  return 0;
}
