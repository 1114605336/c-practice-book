#include <stdio.h>
void inverted(int n)
{
		if(n==0)
			return;
		else
			inverted(n/2);
		printf("%d",n%2);
}

int main()
{
		int n;
		scanf("%d",&n);
		if(n==0)
			printf("0");
		inverted(n);
		return 0;
}
