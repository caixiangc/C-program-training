#include <stdio.h>
int main(){
	char s[100];
	int i=0,j,n=0;
	gets(s);
	while(s[n]){
		n++;
	}
	n--;
	for(i=n;i>=0;i--){
		if(s[i] != ' '){
			printf("%c",s[i]);
		}
	}
	return 0;
}
