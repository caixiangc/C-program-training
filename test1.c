#include <stdio.h>
int main(){
	int repeat,i;
	float x,result;
	scanf("%d",&repeat);
	for(i=0;i<repeat;i++){
		scanf("%f",&x);
		if(x!=0){
			result = 1/x;
			printf("f(%.2f) = %.3f\n",x,result);
		}else{
			result = 0;
			printf("f(%.2f) = %.3f\n",x,result);
		}
		
	}
	return 0; 
}
