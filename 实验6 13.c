#include <stdio.h>
double every (int x,int n)
{
	double a=1,l=n-1;
	if (n==1) {
		return a;
	}
	else {
		for (int i=1;i<n;i++) {
			a*=(x/l);
			l=l-1;
		}
		return a;
	}
}
int main(int argc, char *argv[]) {
	double x,n=1;
	double sum=0;
	scanf("%lf",&x);
	for (;;n++) {
		if (every(x,n)<0.0001) {
			break;
		}
	}
	for (int i=1;i<=n;i++) {
		sum+=every(x,i);
	}	
	printf("%lf\n",sum);
}