#include <stdio.h>
int main(){
	int repeat,i;
	float x,pay;
	scanf("%d",&repeat);
	for(i=0;i<repeat;i++){
		scanf("%f",&x);
		if(x<0){
			pay = 0;
		}else if(x>=0&&x<=15){
			pay = x*4/3;
		}else if(x>15){
			pay = 2.5*x-10.5;
		}
		printf("f(%.2f) = %.2f\n",x,pay);
	}
	return 0;
}
