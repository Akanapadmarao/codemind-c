
#include<stdio.h>
int main()
{
    int n,s=0,d,sq;
    scanf("%d",&n);
    sq=n*n;
    while(sq!=0)
    {
        d=sq%10;
        s=s+d;
        sq=sq/10;
    }
    if(s==n)
    {
    	printf("Neon Number",n);
	}
   else
   {
   	     printf("Not Neon Number",n);
   }
   return 0;
}
