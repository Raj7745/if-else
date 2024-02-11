
#include<stdio.h>
#include<conio.h>

int main()
{
   int no=0;
    
   printf("\nenter a number\n");
   scanf("%d",&no);
   
   (no==0) ? printf("n%d is nutral\n",no) :( (no>0) ? printf("%d is posative\n",no) : printf("\n%d is negative\n",no));

   
   return 0;
}
