#include <stdio.h>

int main(int argc, char *argv[]) {
	int nums[101]={0},flag=0;
	for(int n=2;;){
		for (int i=n+1;i<=100;i++) {
			if (i%n==0) {
				nums[i]=1;
				flag=1;
			}
		}
		if (flag==0) {
			break;
		}
		for (int j=n+1;j<=100;j++) {
			if (nums[j]==0) {
				n=j;
				flag=0;
				break;
			}
		}
	}
	for (int a=2;a<=100;a++) {
		if (nums[a]==0) {
			printf("%4d",a);
		}
	}
}