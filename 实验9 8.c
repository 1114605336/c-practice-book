#include <stdio.h>

int main(int argc, char *argv[]) {
	int a[10]={1 ,23,34,45,56,67,78,89,90,91},key,m,l,h;//没排序要先排序
	scanf("%d",&key);
	l=0;
	h=9;
	while (l<=h) {
		m=(l+h)/2;
		if (key<a[m]) {
			h=m-1;
		}
		if (key>a[m]) {
			l=m+1;
		}
		if(key==a[m])
			break;
	}
	if (l<=h) {
		printf("at %d\n",m);
	}
	else 
		printf("not found\n");
}