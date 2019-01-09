#include <stdio.h>
int main()
{
	int i,j,t,a[4][4];	
	printf("输入:\n");
	{for(i=0;i<4;i++)
	for(j=0;j<4;j++)
	scanf("%d",&a[i][j]);}
	printf("\n输出:\n");
	for(i=0;i<4;i++)
	{
	printf("\n");
	for(j=0;j<4;j++)
	printf("%-4d",a[i][j]);
	}
	printf("\n");
	for(i=0;i<4;i++)
	for(j=0;j<i;j++)
	{t=a[i][j];a[i][j]=a[j][i];a[j][i]=t;}
	for(i=0;i<4;i++)
	{
	printf("\n");
	for(j=0;j<4;j++)
	printf("%-4d",a[i][j]);
	}
}