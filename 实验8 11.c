#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[]) {
	int flag=0;
	for (int i=1000;i<2001;i++) {
		for (int j=1;j<=pow(i,0.5);j++) {
			if (i%j==0) {
				flag++;
			}
		}
		if (flag==1) {
			printf("%d    ",i);
		}
		flag=0;
	}
}