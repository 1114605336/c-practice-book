#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		while(n%i==0) //i不是每次都加1，是n无法是i的倍数是才加1
		{
			printf("%d",i);
			n/=i;
			if(n!=1) printf("*");
		}
	}
	printf("\n");
	return 0;
}