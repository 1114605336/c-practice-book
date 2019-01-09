#include <stdio.h>

int main(int argc, char *argv[]) {
	char n[100];
	char a[100];
	char b[100]={'0'};
	gets(n);
	int i=0,j=0;
	while (n[i]!='.') {
		a[i]=n[i];
		i++;
	}
	while (n[i]) {
		b[j+1]=n[i];
		i++;
		j++;
	}
	puts(a);
	puts(b);
}