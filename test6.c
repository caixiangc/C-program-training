#include <stdio.h> 
int main(){
	int n,i,x,temp;
	scanf("%d",&n);
	n*=n;
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&x);
		arr[i] = x;
	}
	if(arr[3]==0&&arr[6]==0&&arr[7]==0){
		printf("YES");
	}else{
		printf("NO");
	}
	return 0;
}
