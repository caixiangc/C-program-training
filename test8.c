#include <stdio.h>
int main(){
	int arr[100];
	int x,i=0,j,sum;
	scanf("%d",&x);
	while(x>0){
		if(x%2!=0){
			arr[i] = x;
			i++;
		}
		scanf("%d",&x);
	}
	for(j=0;j<i;j++){
		sum +=arr[j];
	}
	printf("The sum of the odd numbers is %d.",sum);
	return 0;
} 
