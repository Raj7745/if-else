#include<stdio.h>
int main()
{



    int no=0;
    

    printf(" Enter a number");
    scanf(" %d",& no);

    if((no % 5==0) && (no % 7==0))
    {

        printf(" number is divisible 5 and 7");

    }
    else if( no % 5==0)
    {

        printf(" number is divided  5");

    }
    else if(no % 7==0)
    {


        printf(" number is divided 7");


    }
    else
    {

        printf(" Number is not divisible by 5 and 7");

    }

        return 0;

}