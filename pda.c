#include<stdio.h>
#include<string.h>
int main()
{
char str[100],stack[100];
int top=-1;
int i =0,len;
printf("enter the string.");
scanf("%s",str);
len =strlen(str);
while (i<len && str[i]=='a')
{
stack[++top]='a';
i++;
}
while(i<len && str[i]=='b')
{
if(top==-1)
{
printf("string rejected\n");
return 0;
}
top--;
i++;
}
if(i==len && top==-1)
{
printf("string accepted\n");
}
else
{
printf("string rejected\n");
}
return 0;
}
