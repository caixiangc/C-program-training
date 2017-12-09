#include <stdio.h>
int main(){
	int digit,i=0,j,h=1,k,digit1;
	scanf("%d",&digit);
	if(digit<0){
		digit = digit*(-1);
	}
	digit1 = digit; 
	while(digit>0){
		i++;
		digit/=10;
	}
	for(j=0;j<(i-1);j++){
		h*=10;
	}

	for(k=0;k<i;k++){
		digit = digit1/h;
		digit1 = digit1%h;
		h /= 10;
		printf("%-2d",digit);	
	}
	return 0;
} 
