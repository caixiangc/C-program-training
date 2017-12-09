#include <stdio.h>
int primeNumber(int n){
	int i,flag=1;
	for(i=2;i<n;i++){
		if(n%i==0){
			flag = 0;
			break;
		}
	}
	return flag;
}
int main(){
	int x,n;
	scanf("%d",&x);
	x = primeNumber(x);
	if(x==0){
		printf("not prime");
	}else{
		printf("prime");
	}	
	
	return 0;
}
