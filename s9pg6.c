#include<stdio.h>
#include<string.h>
int main()
{
int i,j,t=0;
char a[10];
printf("Enter the string");
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
for(j=i+1;a[j]!=0;j++)
{
if(a[i]==a[j])
{
printf("no");
t=1;
break;
}
}
if(t==1)
break;
}
if(t==0)
{
printf("yes");
}
return 0;
}
