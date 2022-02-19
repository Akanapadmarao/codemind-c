#include<stdio.h>
int main()
{
	int n,r,sum=0,pro=1,result;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
		pro=pro*r;
		result=pro-sum;
	}
	printf("%d",result);
	return 0;
}
