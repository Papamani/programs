#include <stdio.h>
int main()
{
int b[10],c[10],k[10];
int i;
for(i=0;i<4;i++)
{
scanf("%d %d",&b[i],&c[i]);
if(i%2==0)
k[i]=b[i]/c[i];
else
k[i]=b[i]%a[i];
}
for(i=0;i<4;i++)
{
printf("%d",k[i]);
}
return 0;
}
