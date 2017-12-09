#include <stdio.h>
int max_y(int m,int n){
	int i,max;
	if(m>n){
		max = m;
	}else{
		max = n;
	}
	while(max){
		if(max%m==0&&max%n==0){
			return max;
		}else{
			max ++ ;
		}	
	}
}
int min_b(int m,int n){
	int i,min;
	if(m>n){
		min = n;
	}else{
		min = m;
	}
	for(i=2;i<=min;i++){
		if(m%i==0&&n%i==0){
			return i;
		}
	}
}
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	
	printf("%d ",min_b(m,n));
	printf("%d",max_y(m,n));
	return 0;
}
