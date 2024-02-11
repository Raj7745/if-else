#include<stdio.h>
#include<conio.h>

int main()
{
   char ch;
   
   printf("enter a character");
   scanf("%c",&ch);
   
   if(ch >= 'A' && ch <= 'Z'  )
   printf(" is upper case \n");
   
   else if(ch >= 'a' && ch <= 'z')
   printf("  is lower case \n");
   
   else
   {
     printf("\n this is invalid input\n");
   }
   
   return 0;
}