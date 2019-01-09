#include <stdio.h>
double every(int n)
{
	double j=1;
	for (int i=1;i<=n;i++) {
		j*=i;
	}
	return 1.0/j;
}
int main(int argc, char *argv[]) {
	int n;
	double sum=0;
	scanf("%d",&n);
	for (int j=1;j<=n;j++) {
		sum+=every(n);
	}
	printf("%lf\n",sum);
}