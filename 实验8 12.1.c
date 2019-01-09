#include <stdio.h>

int main(int argc, char *argv[]) {
	int i=4,j;
	for (j=0;j<5;j++) {
		for (int m=0;m<i;m++) {
			printf(" ");
		}
		for (int n=0;n<10;n++) {
			printf("*");
		}
		printf("\n");
		i-=1;
	}
}