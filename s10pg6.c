#include<stdio.h>
int main()
{
int n,flag=0,i;
printf("Enter the number:");
scanf("%d",&n);
if(n%2!=0&&n>3)
{
for(i=3;i<n;i++)
{
if(n%i==0)
{
flag=1;
break;
}
}
}
if(flag==1)
{
printf("%d is a composite number",n);
}
else
{
printf("%d is not a composite number",n);
}
return 0;
}
