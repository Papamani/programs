#include<stdio.h>
int main()
{
int n[10],k,i;
printf("Enter the two numbers:");
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",n[i]);
}
printf("The follow of n is: %d",k);
return 0;
}
