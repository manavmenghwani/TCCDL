#include<stdio.h>
#include<string.h>

int main()
{
       char str[100];
       int i,len;

       printf("Enter binary string: ");
       scanf("%99s", str);

       len = strlen(str);

       if(len == 0)
{
         printf("String rejected\n");
         return 0; 
}

      for (i=0 ;i < len ;i++) 
      {
          if (str[i] != '0' && str[i] !='1')
          {
            printf("invalid input! enter only 0 and 1.\n");
          }
      }  

     //Accept if the string ends with 1
     if(str[len - 1] =='1')
       printf("string Accepted\n");
     else
       printf("string rejected\n");
     return 0;

}