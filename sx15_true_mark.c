#include <stdio.h>
int main(){
	int line[100];
	int i,n,p=0,q;
	scanf("%d",&n);
	q=n;
	for(i=0;i<n;i++)
	line[i]=i+1;
	for(i=0;;i++)
	{
		if(i==n) i=0;
		if(line[i]!=0) p++;
		else
		continue;
		if(p%3==0)
		{
			line[i]=0;q--;
		}
		if(q==1) break;
	}	
	
	
	for(i=0;i<n;i++)
if(line[i]!=0)
printf("%d",i+1);

return 0;
}

