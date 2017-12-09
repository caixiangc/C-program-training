#include <stdio.h>
int main(){
	int inputs,t=1,i,j,k=0,s=0,inputs1,temp,z;
	scanf("%d",&inputs);
	if(inputs<0){
		inputs = -inputs;
		t = -t;
	}
	inputs1 = inputs;
	while(inputs1>0){
		k+=1;
		inputs1 /= 10;
	}
	for(i=0;i<k;i++){
		z=1;
		temp = inputs % 10;
		inputs /= 10;
		for(j=(k-1);j>i;j--){
			z*=10;
		}
		s = s+ temp*z;
	}
	printf("%d",t*s);
	return 0;
}
