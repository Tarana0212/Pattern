#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter range");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==n/2 && j==n/2)
			{
			printf("0");
		    }
			else
			{
			
			printf("1");
		    }
		}
		printf("\n");
	}
	return 0;
}
