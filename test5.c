#include <stdio.h>
int main(){
	int n,i,x,temp,x1;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&x);
		arr[i] = x;
	}
	scanf("%d",&x1);
	for(i = 0;i<n;i++){
		if(arr[i]==x1){
			printf("%d: a[%d]",x1,i);
			break;
		}else if(arr[i]!=x1&&i==(n-1)){
			printf( "%d: not found\n", x1);
		}
	}
	return 0;
}
