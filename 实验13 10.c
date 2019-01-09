#include <stdio.h>
int fib(int n){
	int f1=1,f2=1;
	if (n==1||n==2) {
		return 1;
	}
	else {
		return fib(n-1)+fib(n-2);
	}
}
int main(int argc, char *argv[]) {
	int n;
	scanf("%d",&n);
	printf("%d\n",fib(n));
}