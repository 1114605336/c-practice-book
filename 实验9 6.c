#include <stdio.h>

int main(int argc, char *argv[]) {
	int a[10],i,j,t;
	for (i=0;i<10;i++) {
		scanf("%d",&a[i]);
	}
	for (i=0;i<9;i++) {
		for (j=i+1;j<10;j++) {
			if (a[i]>a[j]) {
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	for (int m=0;m<10;m++) {
		printf("%d	",a[m]);
	}
}