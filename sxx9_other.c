#include <stdio.h>
int main(){
	int flag=0,n,i,arr[100],j=0;
	scanf("%d",&n);
	if(n<=1000){
		for(i=1;i<=n;i++){
		if(i%7==0||i%11==0){
			if(i%7==0&&i%11==0){
				
			}else{
				arr[j] = i;
				j++;
				flag+=1;
			}
		}
	}
	printf("%d\n",flag);
	for(i=0;i<flag;i++){
		if(i==(flag-1)){
			printf("%d",arr[i]);
		}else{
			printf("%d ",arr[i]);
		}
	}
	
	
	}
	else{
		return;
	} 
	
	
	return 0;
}
