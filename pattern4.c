/*	1111
	0  0
	1  1
	0000
*/
#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4;j++)
		{
			if(i==1||i==4||j==1||j==4)
			{
				if(i%2!=0)
				{
					printf("1");
				}
				else
				{
					printf("0");
				}
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
