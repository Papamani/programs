#include<stdio.h>
#include<string.h>
int main()
{
char a[10];
int n,m,i;
printf("Enter the string:");
scanf("%s",a);
printf("Enter the last digit value:");
scanf("%d",&n);
m=strlen(a);
for(i=n;i<m;i++)
{
printf("%c",a[i]);
}
return 0;
}
