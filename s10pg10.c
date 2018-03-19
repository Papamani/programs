#include<stdio.h>
int main()
{
int a,b,product=1;
printf("Enter the number:");
scanf("%d",&a);
while(n!=0)
{
b=a%10;
product=product*b;
a=a/10;
}
printf("%d",product);
return 0;
}
