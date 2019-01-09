#include <stdio.h>
#include <math.h>
int isSquere(int x)//判断是否是平方数
{
	double y =(double)x;
	double temp = sqrt(y);
	int b = (int)temp;
	if(b*b == x){
		return 1;
	}
	else {
		return 0;
	}
}

int isTwoSame(int x)
{
	int digit0 = x%10;
	int digit1 = (x/10)%10;
	int digit2 = x/100;
	return(digit0==digit1||digit0==digit2 ||digit1==digit2); //这里不知道有没有理解错误，三位数相同也算两位数相同,反正也没三位一样的
}
int f(int *n)
{
	int *a=n;
	int j=0;
	int i;
	for(i=100;i<1000;i++,j++){
		if(isSquere(i)&&isTwoSame(i))
		{
			a[j]=i;
			j++;
		}
	}
	return j;
}
int main ()
{
	int n[100];
	f(n);
}