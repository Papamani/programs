#include <stdio.h>
int main() 
{
int n,m;
int p,i,k,flag=0;
printf("Enter the two mnumbers:");
scanf("%d %d",&n,&m);
p=m*n;
for(i=1;i<=p/2;i++)
{
k=i*i;
if(k==p)
{
printf("yes");
flag=1;
break;
}
}
if(flag==0)
printf("no");
return 0;
}
