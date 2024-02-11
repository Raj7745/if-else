
#include<stdio.h>
#include<conio.h>

int main()
{
   char ch;
   
   printf("enter a  character \n");
   scanf("%c",&ch);
   
   if(ch >= 'A' && ch <= 'Z'  )
   printf("%c is upper case\n ",ch);
   
   else if(ch >= 'a' && ch <= 'z')
   printf(" %c is lower case\n ",ch);
   
   else if(ch >= '0' && ch<='9')
   {
     printf("%c is digit\n");
   }
   else
   {
     printf(" %c this is a invalid input \n",ch);
   }
   
   return 0;
}