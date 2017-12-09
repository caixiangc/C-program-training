#include <stdio.h>
int main(){
	int n,count=0,i,k=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if((i%7!=0&&i%11==0)||(i%11!=0&&i%7==0) )
		{
			count++;
		}
	}
	printf("%d\n",count);
	for(i=1;i<=n;i++)
	{
		if((i%7!=0&&i%11==0)||(i%11!=0&&i%7==0) )
		{
			k++;
			if(k==count)
	 		printf("%d",i); 
	 		else
   			printf("%d ",i); 
		}
	}
	return 0;
} 
