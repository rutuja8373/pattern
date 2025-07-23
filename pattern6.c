/*	*@!
	*@!
	*@!
*/
#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			if(j==1)
			{
				printf("*");
			}
			if(j==2)
			{
				printf("@");
			}
			if(j==3)
			{
				printf("!");
			}
		}
		printf("\n");
	}
}
