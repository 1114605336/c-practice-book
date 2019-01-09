#include <stdio.h>

int main(int argc, char *argv[]) {
	int a[10]={23,43,12,3,5,7,8,67,89,33},flag,i,t;
	flag=1;
	while (flag) {
		flag=0;
		for (i=0;i<9;i++) {
			if (a[i]>a[i+1]) {
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
				flag=1;
			}
		}
	}
	for (int i=0;i<10;i++) {
		printf("%d	",a[i]);
	}
}