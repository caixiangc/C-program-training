#include <stdio.h>
int main(){
	int l,r,i,j,temp,flag=0;
	scanf("%d%d",&l,&r);
	for(i=l;i<=r;i++){
		temp = i;
		
		while(temp/10>0){ 
			if(temp%10==l){
				flag+=1;
				printf("temp:%d\n",temp);
			}
			temp/=10;
		}
		while(temp/10<=0){
		if(temp%10==2) flag++;break;printf("temp:%d\n",temp);
		
		}
		 
	}
	printf("%d",flag);
	return 0;
}
