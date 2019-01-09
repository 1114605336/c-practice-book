#include <stdio.h>
int strcat(char *str1,char *str2){
	int i=0,j=0,sum=0;
	while (str1[i]) {
		i++;
	}
	sum=i;
	while (str2[j]) {
		str1[i]=str2[j];
		i++;
		j++;
	}
	return sum+j;
}
int main(int argc, char *argv[]) {
	char c[1000];
	char d[1000];
	gets(c);
	gets(d);
	int i=strcat(c,d);
	printf("%d\n",i);
	puts(c);
}