#include<stdio.h>
#include<conio.h>
int main()
{


int amount=0;

    printf(" enter a ammount ");
    scanf("%d",&amount);


    if(amount>1000)
    {


        printf(" wlwcome in mall  enjoy all floar\n");
    }
    else if(amount>500)
    {


        printf(" you enejoy only second ad third floar \n");
    }
    else if(amount>200)
    {

        printf(" you enjoy only in first floar\n");
    }
    else
    {

        printf(" minimum cash is avilable is 200\n");
    }


    return 0;




}