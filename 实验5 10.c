#include <stdio.h>
#include "stdlib.h"
int main(int argc, char *argv[]){
	double a,b,c;
	scanf("%lf%lf%lf",&a,&b,&c);
	if (a>=b) {
		if (a>=c) {
			printf("%lf\n",a);
		}
		else {
			printf("%lf\n",c);
		}
	}
	else {
		if (b>=c) {
			printf("%lf\n",b);
		}
		else {
			printf("%lf\n",c);
		}
	}
}