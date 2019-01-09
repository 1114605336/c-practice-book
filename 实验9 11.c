#include <stdio.h>

int main(int argc, char *argv[]) {
	int n[30],flag,m=0,a=30,k=0;//m 淘汰人数   k是最重要的，必须有人k才加1
	int i=0;
	for (;i<30;i++) {
		n[i]=i+1;
	}
	i=0;
	while (m<a-1) {
		if (n[i]!=0) {
			k++;
		}
		if (k==5) {
			n[i]=0;
			k=0; //每五个人就清空
			m++;
		}
		i++;
		if (i==29) {
			i=0;
		}
	}
	for (int j=0;j<30;j++) {
		if (n[j]!=0) {
			printf("%d\n",j);
		}
	}
}