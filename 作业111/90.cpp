#include<stdio.h>
int main()
{
	int n,sum;
	scanf("%d",&n);
	sum=n/100+(n/10)%10+n%10;
	printf("%d",sum);
	return 0;
}
