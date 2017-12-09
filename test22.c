#include <stdio.h>
int main()
{ int i,j,temp,n=0;
  int a[10]={7,6,20,3,14,88,53,62,10,29},b[10];
 //从以下开始答题
 for(i=0;i<10;i++){
 	if(a[i]%2==0){
 		b[n] = a[i];
 		n++;
	 }
 }
 
 for(i=0;i<n;i++){
 	for(j=i;j<n;j++){
 		if(b[i]>b[j]){
 			temp = b[i];
 			b[i] = b[j];
 			b[j] = temp;
		 }
	 }
 }
 
 j=0;
 for(i = 0;i<n;i++){
 	if(j==3){
	  printf("\n");
	  j = 0;
	 }
	 printf("%3d",b[i]);
	 j++;
	 
 }
return 0; 
}

