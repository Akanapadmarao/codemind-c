#include<stdio.h>
int main()
{
    int L,B,W,C,A,a,ta,c;
    scanf("%d",&L);
    scanf("%d",&B);
    scanf("%d",&W);
    scanf("%d",&C);
    A=L*B;
    a=(L+2*W)*(B+2*W);
    ta=a-A;
    c=ta*C;
    printf("%d",c);
    return 0;
    
}