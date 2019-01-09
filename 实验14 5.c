#include <stdio.h>

int main(int argc, char *argv[]) {
	int a[5][5];
	int b[5];
	int sum=0;
	for (int i=0;i<5;i++) {
		for (int j=0;j<5;j++) {
			scanf("%d",&a[i][j]);
			sum+=a[i][j];
		}
		b[i]=sum/5;
		sum=0;
	}
	for (int i=0;i<5;i++) {
		printf("%d    ",b[i]);
	}
}