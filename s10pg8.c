#include<stdio.h>
int main()
{
int n,i,a[10];
printf("Enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
if(a[i]!=i)
{
printf("%d",i);
break;
}
}
return 0;
}
