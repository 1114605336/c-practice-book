#include <stdio.h>
void fun(char str[],char c){
	int i=0,j=i;
	while (str[i]) {
		if (str[j]==c){
			for(;str[j];j++){
				str[j]=str[j+1];
			}
		}
		i++;
		j=i;	
	}
	puts(str);
}
int main(int argc, char *argv[]) {
	char nums[100];
	gets(nums);
	fun(nums,'5');
}