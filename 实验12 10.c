#include <stdio.h>
int sxhs(int n)
{
	int a=n%10;
	int b=(n/10)%10;
	int c=(n/100)%10;
	if ((a*a*a+b*b*b+c*c*c)==n) {
		return 1;
	}	
	else {
		return 0;
	}
}
int main(int argc, char *argv[]) {
	int n;
	scanf("%d",&n);
	printf("%d\n",sxhs(n));
	for (int i=100;i<1000;i++) {
		if(sxhs(i))
		{printf("%d\n",i);}
	}
	
}