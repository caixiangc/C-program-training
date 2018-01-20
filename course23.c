#include<stdio.h>
int main()
{
	int n[100],m,x,i,j;
	int vec[5]={1,3,9,27,81},l[100][5]={0,0},r[100][5]={0,0};
	scanf("%d",&m);
	for(j=0;j<m;j++)
	{
		scanf("%d",&n[j]);
		x=n[j]+121;
		for(i=4;i>=0;x%=vec[i--])
		switch(x/vec[i]){
			case 0:l[j][i]=vec[i];break;
			case 2:r[j][i]=vec[i];
			}
			if(n[j]+l[j][0]+l[j][1]+l[j][2]+l[j][3]+l[j][4]==r[j][0]+r[j][1]+r[j][2]+r[j][3]+r[j][4])
			{
			printf("left: ");
			for(i=0;i<5;i++)
			if(l[j][i]!=0)
			printf("%d ",l[j][i]);
			printf("right:");
			for(i=0;i<5;i++)
			if(r[j][i]!=0)
			printf(" %d",r[j][i]);
			}
			else printf("no answer");
			if(j<m-1)
			printf("\n");
	}
	return 0;
 } 
