#include <stdio.h>
#include <string.h>
#define N 100
int main(int argc, char *argv[]) {
	int n,l,i=0;
	scanf("%d",&n);
	char c[N]={0},t;
	while (n!=0) {
		l=n%16;
		n/=16;
		if (l==10) {
			c[i]='A';
		}
		else if (l==11){
			c[i]='B';
		}
		else if (l==12){
			c[i]='C';
		}
		else if (l==13){
			c[i]='D';
		}
		else if (l==14){
			c[i]='E';
		}
		else if (l==15){
			c[i]='F';
		}
		else if (l>=0&&l<10){
			c[i]=l+48;
		}
		i++;
	}
	l=strlen(c);
	for (i=l-1;i>=0;i--) {
		printf("%c",c[i]);
	}
}