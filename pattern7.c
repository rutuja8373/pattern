/*	*&!
	* !
	* !
	*&!
*/
#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=3;j++)
		{
			if(j==1)
			{
				printf("*");
			}
			else if(j==2&&i==1||j==2&&i==4)
			{
				printf("&");
			}
			else if(j==3)
			{
				printf("!");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
