#include <stdio.h>
int main(){
	int flag=0,n,i,k=0;
	scanf("%d",&n);
	if(n<=1000){
		for(i=1;i<=n;i++){
		if(i%7==0||i%11==0){
			if(i%7==0&&i%11==0){
			}else{
				flag+=1;
			}
		}
	}
	printf("%d\n",flag);
	for(i=1;i<=n;i++){
		if(i%7==0||i%11==0){
			if(i%7==0&&i%11==0){
			}else{
				k+=1;
				if(k==flag){
					printf("%d",i);
				}else{
					printf("%d ",i);
				}
		
			}
		}
	}
	
	
	
	
	}
	else{
		return;
	} 
	
	
	return 0;
}
