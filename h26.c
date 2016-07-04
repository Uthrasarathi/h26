#include<stdio.h>
#include<conio.h>
void main()
{
char str[50];
int i=0,j,k=0;
clrscr();
scanf("%c",str);
while(k<0)
{
if(str[i]==str[i+1])
i++;
else
{
str[k]=str[i];
i++;
k++;
}
}
for(j=0;j<k;j++)
{
printf("%c",str[j]);
}
getch();
}
