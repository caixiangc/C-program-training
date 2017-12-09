#include<stdio.h>
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	for(i=0;i<n-1;i++)
	{
	for(j=1;j<=1+2*(n-2)-i*2;j++)
	printf(" ");
    for(k=1;k<=1+i*2;k++)
    printf(" *");
    printf("\n");
	}
	printf("*");
	for(i=0;i<2*(n-1);i++)
	  printf(" *");
	  printf("\n");
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<1+i*2;j++)
		printf(" ");
		for(k=2*n-3-2*i;k>0;k--)
		 printf(" *");
		  printf("\n");
	}
}
