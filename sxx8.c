#include <stdio.h>
int main(){
	char s[100];
	int n=0,i,j;
	
	while(scanf("%c",&s[n])){
		n++;
	}
	for(i=0;i<n;i++){
		printf("%c",s[i]);
	}
	
	return 0;
}
