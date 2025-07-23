/*	A
	AB
	ABC
	ABCD   */

#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		char ch='A';
		for(j=1;j<=i;j++)
		{
			printf("%c",ch);
			ch++;
		}
		printf("\n");
	}
}










//#include<stdio.h>
//int main()
//{
//	char ch='A';
//	int i,j;
//	for(i=1;i<=4;i++)
//	{
//		for(j=1;j<=i;j++)
//		{
//			if(j==1)
//				printf("A");
//			else if(j==2)
//				printf("B");
//			else if(j==3)
//				printf("C");
//			else if(j==4)
//				printf("D");
//			else
//				printf(" ");
//		}
//		printf("\n");
//	}
//}


