#include<stdio.h>
#include<conio.h>
void main()
{
char ab;
clrscr();
printf("enter any alphabet:");
scanf("%c",&ab);
if(ab=='a' || ab=='e' || ab=='i' || ab=='o' || ab=='u')
{
printf("vowel");
}
else
{
printf("consonant");
}
getch();
}
