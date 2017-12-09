#include<stdio.h>
#include<math.h>
int main()
{ float a[3][3]={{1.3,2.7,3.6},{2,3,4.7},{3,4,1.27}};
  float x;
  int i,j;

  x = a[0][0];
 for(i=0;i<3;i++){
 	if(x<a[0][i]){
 		x =a[0][i];	
	 }
 }
 for(i=0;i<3;i++){
 	a[0][i] = a[0][i]/x;
 }
 
 
 
   x = a[1][0];
 for(i=0;i<3;i++){
 	if(x<a[1][i]){
 		x =a[1][i];	
	 }
 }
 for(i=0;i<3;i++){
 	a[1][i] = a[1][i]/x;
 }
 
    x = a[2][0];
 for(i=0;i<3;i++){
 	if(x<a[2][i]){
 		x =a[2][i];	
	 }
 }
 for(i=0;i<3;i++){
 	a[2][i] = a[2][i]/x;
 }

 
 
  for(i=0;i<3;i++)
   { for(j=0;j<3;j++) printf("%7.3f",a[i][j]);
     printf("\n");
   }
 return 0;
} 

