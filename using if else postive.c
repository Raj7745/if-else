#include<stdio.h>
int main()
{
    int no=0;

    printf(" enter a number \n");
    scanf(" %d",&no);

    if(no==0)
    {



        printf(" this number is neutral\n");
    }
   else if(no>0)
    {


        printf(" this number is positive\n ");
    }
    else
    {


        printf(" this number is negative\n");
    }






    return 0;
}
