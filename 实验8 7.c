#include <stdio.h>
#include "math.h"
int every(int a,int n)
{
	int sum=0;
	for (int i=0;i<=n;i++) {
		sum+=(a*pow(10,i));
	}
	return sum;
}
int main(int argc, char *argv[]) {
	int a,n,sum;
	scanf("%d%d",&a,&n);
	for(int i=0;i<n;i++)
	{
		sum+=every(a,i);
	}	
	printf("%d",sum);
	return 0;
}