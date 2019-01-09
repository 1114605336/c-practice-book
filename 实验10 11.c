#include <stdio.h>
#include <string.h>
#define N 1000 
int main(int argc, char *argv[]) {
	char c[N];
	gets(c);
	int flag=0,k=0,l=strlen(c);
	c[l]=' ';
	for (int i=0;i<=l;i++) {
		if (c[i]!=' ') {
			flag++;
		}
		if (c[i]==' ') {
			if (k<=flag) {
				k=flag;
			}
			flag=0;
		}
	}
	printf("%d\n",k);
}