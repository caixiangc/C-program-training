#include <stdio.h>
int main(){
	char s[100],s1[100];
	int n,m,i,j=0;
	scanf("%d",&n);
	scanf("%s",s); //gets(s) 这里会出现问题 ，还是scanf("%s",s)
	//gets(s)
	scanf("%d",&m);
	for(i=(m-1);i<n;i++){
		s1[j++] = s[i];
	}
	s1[j] = '/0';
	for(i=0;i<=(n-m);i++){
		printf("%c",s1[i]);
	}
	return 0;
}
