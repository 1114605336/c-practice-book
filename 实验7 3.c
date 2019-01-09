#include <stdio.h>

int main(int argc, char *argv[]) {
	int i, k=0;
	i=0;
	do {
		k+=i;
		i++;
		i+=2;
		printf("%d\n",k);
	} while (i<10);
}