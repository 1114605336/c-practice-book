#include <stdio.h>

int main(int argc, char *argv[]) {
	int flag=0,a,b,c;
	for (int i=0;;i++) {
		scanf("%d%d%d",&a,&b,&c);
		if ((a+b)>c||(a+c)>b||(b+c)>a) {
			flag+=1;
			if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a))
			printf("zhijiao\n");
			if (a==b&&b==c) {
				printf("dengbian\n");
			}
			if ((a==b&&a!=c)||(a==c&&a!=b)||(b==c&&b!=a)) {
				printf("dengyao\n");
			}
		}
		if (flag==5) {
			break;
		}
	}
}