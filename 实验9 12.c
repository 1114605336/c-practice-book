#include <stdio.h>

int main(int argc, char *argv[]) {
	int a[7][7];
	for (int i=0;i<7;i++) {
		a[i][0]=1;
	}
	for (int i=1;i<7;i++) {
		for (int j=1;j<7;j++) {
			a[i][j]=a[i-1][j]+a[i-1][j-1];
		}
	}	
	for (int i=0;i<7;i++) {
		for (int j=0;j<7;j++) {
			if (a[i][j]!=0) {
				printf("%d	",a[i][j]);
			}
			if (j==6) {
				printf("\n");
			}
		}
	}
}