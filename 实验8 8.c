#include <stdio.h>

int main(int argc, char *argv[]) {
	int n,a,b,c;
	for (int n=100;n<1000;n++) {
		c=n%10;
		b=(n/10)%10;
		a=(n/100)%10;
		if (n==a*a*a+b*b*b+c*c*c) {
			printf("%d\n",n);
		}
	}
}