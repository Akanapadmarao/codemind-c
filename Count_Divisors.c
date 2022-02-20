#include<stdio.h>
int main()
{
    int r,k,l,i,count=0;
    scanf("%d %d %d",&r,&k,&l);
    
    for(i=r;i<=k;i++)
    {
        if(i%l==0)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}