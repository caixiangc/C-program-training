#include<string.h>
#include<stdio.h>
int main(void)
{
    char ss1[100];
    char ss2[100];
    char ss3[100];
    char temp[100];
    scanf("%s%s%s",ss1,ss2,ss3);
    if(strcmp(ss1,ss2)>0) strcpy(temp,ss1),strcpy(ss1,ss2),strcpy(ss2,temp);
    if(strcmp(ss1,ss3)>0) strcpy(temp,ss1),strcpy(ss1,ss3),strcpy(ss3,temp);
    if(strcmp(ss2,ss3)>0) strcpy(temp,ss2),strcpy(ss2,ss3),strcpy(ss3,temp);
    printf("%s\n%s\n%s",ss1,ss2,ss3);
    return 0;
}
//当s1<s2时，返回为负数

//当s1=s2时，返回值= 0

//当s1>s2时，返回正数

//即：两个字符串自左向右逐个字符相比（按ASCII值大小相比较），直到出现不同的字符或遇'\0'为止。
