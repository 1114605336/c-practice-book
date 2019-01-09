#include <stdio.h>
#include <math.h>
int disperse(int n,int array[])
{
	int j=0;
	int flag=0;
	int sum=1;
	for (int i=1;i<pow(n,0.5);i++) { //费马小定理
		if (n%i==0) {
			array[j]=i;
			j++;
		}
	}
	while (array[flag]) {
		flag++;
	}
	return flag;
}
int main(int argc, char *argv[]) {
	int n,a[100];
	scanf("%d",&n);
	int l=disperse(n,a);
	for (int i=0;i<l;i++) {
		printf("%d    ",a[i]);
	}
}