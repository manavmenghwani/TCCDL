#include<stdio.h>
#include<string.h>
int main()
{
char str[100];int i,len zero,one;
printf("enter a binary string:");
scanf("%99s",str);
len=strlen(str);
if(len==0)
{
printf("string rejected\n");
return 0;
}
for(i=0;i<len;i++)
if(str[i]!='0'&&str[i]!='1')
{
printf("invalid input! enter only 0 and 1,\n");
return 0;
}
if(zero%2==0 && one%2==0)
printf("string accepted\n");
else
printf("string rejected\n");
return 0;
}
