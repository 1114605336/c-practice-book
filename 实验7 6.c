#include <stdio.h>
#include <math.h>
int main(){
	double s,la=1,t;
	s=2;
	t=sqrt(2);
	while (fabs(2/t-1)>la) {
		s=s*2/t;
		t=sqrt(2+t);
	}	
	printf("%lf\n",s);
}