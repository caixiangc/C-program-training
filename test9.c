#include <stdio.h>
int main(){
	int z,fen5,fen2,fen1,count;
	scanf("%d",&z);
	for(fen5=z/5;fen5>0;fen5--){
		for(fen2=(z-5*fen5)/2;fen2>0;fen2--){
			for(fen1=(z-5*fen5-2*fen2);fen1>0;fen1--){
				count++;
				printf("fen5:%d,fen2:%d,fen1:%d,total:%d\n",fen5, fen2, fen1, fen5+fen2+fen1);
				break;
			}
		}
	}
	printf("count = %d",count);
	return 0;
}
