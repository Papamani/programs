#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
char a;
int isLowercaseVowel,isUppercaseVowel;
printf("Enter an alphabet:");
scanf("%s",&a);
isLowercaseVowel=(a=='a'||a=='e'||a=='i'||a=='o'||a=='u');
isUppercaseVowel=(a=='A'||a=='E'||a=='I'||a=='O'||a=='U');
if(isLowercaseVowel||isUppercaseVowel)
printf("%s is a Vowel",a);
else
printf("%s is a Constant",a);
getch();
}
