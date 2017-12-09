#include <stdio.h>
int main(){
	int n,i,x,temp;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&x);
		arr[i] = x;
	}

	int index_min,index_max;
	index_max = index_min = 0;
	for(i=0;i<n;i++){
		if(arr[index_max]<arr[i]){
			index_max = i;
		}
	}
	temp = arr[4];
	arr[4] = arr[index_max];
	arr[index_max] = temp;
	temp = 0;
	index_max = index_min = 0;
	for(i=0;i<n;i++){
		if(arr[index_min]>arr[i]){
			index_min = i;
		}
	}
	temp = arr[0];
	arr[0] = arr[index_min];
	arr[index_min] = temp;

	printf("After swap:");
	for(i=0;i<n;i++){
		printf(" %d",arr[i]);
	}
	return 0;
}
