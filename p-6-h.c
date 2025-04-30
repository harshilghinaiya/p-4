#include<stdio.h>
int main()
{
	int i, j,k,l;
	
	for(i=5; i>=0;i--)
	{
		for(j=1; j<=5-i; j++)
		{
		printf("%d ",j);
		}
		
		
		for(k=0; k<2 *i; k++)
		{
		printf("  ");
		}
		
		for(l=5-i; l>0; l--)
		{
		printf("%d ",l);
		}
		printf("\n");
	}
}
/*
1                 1
1 2             2 1
1 2 3         3 2 1
1 2 3 4     4 3 2 1
1 2 3 4 5 5 4 3 2 1
*/