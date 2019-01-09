#include <stdio.h>

int main(int argc, char *argv[]) {
	int n;
	scanf("%d",&n);
	int l=n;
	for (int i=1;i<=n;i++) {
		for (int j=1;j<l;j++) {
			printf(" ");
		}
		for(int m=0;m<(2*i-1);m++)
		{	printf("*");}
		printf("\n");
		l-=1;
	}
}