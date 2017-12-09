#include <stdio.h>
void bind(int n,char s1[],char s2[]){
	int i=0;
	while(n){
		if(s2[i]){
			s1[n] = s2[i];
			i++;
			n++;
		}else{
			break;
		}
	}
}
int main(){
	char s1[100];
	char s2[100];
	gets(s1);
	gets(s2);
	int n=0;
	//在给方法传值的时候（参数是字符串或者数组），不用定义 地址变量，因为字符串本来就指向地址，指向内存
	while(s1[n]!='\0'){  	//如果是指针变量那么不能用这种方法计算长度,这样计算第一次就跳出循环
		n++;
	}
	bind(n,s1,s2);
	int i;
	printf("%s\n",s1);
	return 0;
}
