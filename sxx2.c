#include <stdio.h>
int main(){
	char zimu[50];
	char* all;
	all = (char*)malloc(100000 * sizeof(char));//要动态分配内存 
	gets(zimu);
	gets(all);
	int n=0,n1=0,cishu=0,weizhi=-1;
	while(all[n]!='\0'){
		n++;
	}
	while(zimu[n1]!='\0'){
		if ((zimu[n1]>='A')&&(zimu[n1]<='Z')){
			 zimu[n1] += 32;
		}
		n1++;
	}
	int i=0,j=0;
	while(i<n){
		if(j==(n1-1)&&all[i] == zimu[j]){
			cishu +=1;
			if(weizhi== -1){
				weizhi = (i+1-n1);
			}
			j=0;
		}else if(all[i] == zimu[j]){
			i++;
			j++;		
		}else if(all[i] != zimu[j]){
			j=0;
			i++;
		}
	}

	printf("%d %d",cishu,weizhi);
	return 0;
}
