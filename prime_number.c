#include<stdio.h>  
int main() 
{    
   int n,i,flag=0;     
    scanf("%d",&n);        
   for(i=2;i<=n/2;i++)    
   {    
  if(n%i==0)    
{    
  printf("not a prime");    
   flag=1;    
   break;    
}    
}   
   if(flag==0)   
    printf("prime");     
   return 0;  
 }     