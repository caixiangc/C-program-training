#include <stdio.h>
int main(){
	int arr[10],i,x,index;
	for(i = 0;i<9;i++){
		scanf("%d",&arr[i]);
	}
	scanf("%d",&x);
	for(i = 0;i<9;i++){
		if(arr[i]<x&&arr[i+1]>x){
			index = i;
		}
	}
	for(i = 9; i>index ;i--){		
		if(i==(index+1)){
			arr[i] = x;
		}else{
			arr[i] = arr[i-1];
		}
	}
	for(i=0;i<10;i++){
		printf("%d\n",arr[i]);
	}
	return 0;
}
