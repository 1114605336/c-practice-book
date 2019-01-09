#include <stdio.h>
#include <stdlib.h>
void restr(char *c)
{
	int i=0;
	while (c[i]!='\0') {
		i++;
	}
	int len=i;
	char t;
	i=0;
	for (int j=len-1;i!=j;i++,j--) {
		t=c[i];
		c[i]=c[j];
		c[j]=t;
	}
}
int main(int argc, char *argv[]) {
	char *c=malloc(100);
	gets(c);
	restr(c);
	puts(c);
}