#include <stdio.h>
#include <math.h>
int main()
{ double y=1.05;
  int n=1;
  while(pow(1.05,n)<1e6){
 	if(1e6 < pow(1.05,n+1)){
 		break;
	 }
	 n++;
 }
 	printf("%d,%.0f",n,pow(1.05,n));
	return 0;  
}
