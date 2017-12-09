#include <stdio.h>
int main(){
	int repeat,min,seco,i;
	float distance,pay;
	scanf("%d",&repeat);
	for(i=0;i<repeat;i++){
		scanf("%f%d%d",&distance,&min,&seco);
		if(distance<3){
			pay = 10+(min*60+seco)/300;
			
		}else if(distance>3&&distance<10){
			pay = 10+((min*60+seco)/300+distance-3)*2;
		}else if(distance>10){
			pay = 10+((min*60+seco)/300+distance-10)*3+15;
		}
		pay = (pay*10+5)/10;
		printf("cost = %.0f\n",pay); 
	}
	
	return 0;
}
