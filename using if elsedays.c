#include<stdio.h>
#include<conio.h>
int main()
{
    int day=0;

    printf (" enetr a day number\n");
    scanf("%d",&day);


    if(day==1)
    {

        printf(" sunday\n");
    }
    else if(day==2)
    {
        printf(" monday\n");
    }
    else if(day==3)
    {
        printf(" tuesday \n");
    }
    else if(day==4)
    {

        printf(" wednesday\n");
    }
    else if (day==5)
    {

        printf(" thursaday \n");
    }
    else if(day ==6)
    {
        printf(" Friday \n");
    }
    else if ( day ==7)
    {
        printf("saturday \n");
    }
    else
    {

        printf(" invalid input please enetr a number between 1 to 7\n");
    }
    
    
    return 0;

}