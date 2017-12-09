#include <stdio.h>
int main(){
	int x,arr[100],n=0,min=0,max=0,i,j,arrindex[100],temp,arr1[100];
	scanf("%d",&x);
	arr[n] = x;
	while(x>=0){
		scanf("%d",&x);
		arr[++n] = x;
	}
	//复制
	for(i=0;i<n;i++){
		arr1[i] = arr[i];
	}
	for(i=0;i<n;i++){
		min=i;
		temp = 0;
		for(j=i+1;j<n;j++){
			if(arr[min]>arr[j]){
				min = j;
			}
		}
		temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
	}

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(arr[i] == arr1[j]){
				arrindex[i] = j;
				arr1[j] = -100;
				break;
			}
		}
	}

	for(i=0;i<n;i++){
		if(i==(n-1)){
			printf("%d(%d)",arr[i],arrindex[i]+1);
		}else{
			printf("%d(%d) ",arr[i],arrindex[i]+1);
		}
	}

	return 0;
}
