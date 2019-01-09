#include <stdio.h>
double f(double x)
{
	double s;
	s=(2*x*x*x+3*x*x-4*x+1)/(10*x+3);
	return s;
}
double q(double x)
{
	return 3*f(x)*f(x)*f(x)+2*f(x)*f(x)+f(x);
}
int main(int argc, char *argv[]) {
	double x;
	scanf("%lf",&x);
	printf("%lf\n",q(x));
}