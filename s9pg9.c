#include<stdio.h>
#include<string.h>
int main()
{
int n,i;
char a[10];
printf("Enter the string:");
scanf("%d",a);
n=strlen(a);
for(i=n-1;i>=0;i--)
{
printf("%c",a[i]);
}
return 0;
}
