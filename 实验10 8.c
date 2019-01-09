#include <stdio.h>

int main(int argc, char *argv[]) {
	char a[100],b[100];
	int i,j;
	gets(a);
	gets(b);
	i=0;
	j=0;
	while (a[i]!=0) {
		i++;
	}
	while (b[j]!=0) {
		a[i]=b[j];
		i++;
		j++;
	}	
	puts(a);
}