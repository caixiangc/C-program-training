#include <stdio.h>


int main(){
	int arr[3][3],i,j,arr1[3][3],temp;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&arr[i][j]);
		}
	}

	for(i = 0;i<3;i++){
		for(j=0;j<3;j++){
			arr1[j][i] = arr[i][j];
		}
	}


	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(j==2){
				printf("%d \n",arr1[i][j]);
			}else{
				printf("%d ",arr1[i][j]);
			}

		}
	}
	return 0;
}
