#include <stdio.h>
void convert(int n,int method,char *result){
	int i=0;
	while (n!=0) {
		if (method==2) {
			result[i]=(n%2)+48;
			n/=2;
			i++;
		}
		else if (method==8) {
			result[i]=(n%8)+48;
			n/=8;
			i++;
		}
		else if (method==16) {
			if ((n%16)>=0&&(n%16)<=9) {
				result[i]=(n%16)+48;
			}
			else if ((n%16)>=10){
				result[i]=(n%16)+55;
			}
			n/=16;
			i++;
		}
	}	
}
int main(int argc, char *argv[]) {
	int i=0;
	int n,method;
	char a[100];
	scanf("%d%d",&n,&method);
	convert(n,method,a);
	while (a[i]) {
		printf("%c",a[i]);
		i++;
	}
}