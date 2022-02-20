#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,M,t,p;
    scanf("%d %d %d",&x,&y,&M);
    p=pow(x,y);
    t=p%M;
    printf("%d",t);
    return 0;
}