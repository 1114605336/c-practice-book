#include <stdio.h>

int main(int argc, char *argv[]) {
	int a,t,b,r=1;
	scanf("%d%d",&a,&b);
	if (a<b) {
		t=a;
		a=b;
		b=t;
	}
	while(r!=0)
	{
			r=a%b;
			a=b;
			b=r;
	}
	if (a==1) {
		printf("YES\n");
	}
	else {
		printf("NO\n");
	}
	
}