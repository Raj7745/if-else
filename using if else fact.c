#include<stdio.h>
int main()
{

    int no=0;
    int fact=0;
    int temp=0;


    printf(" enter a positive number to calculate its factorial ..");
    scanf("%d",&no);

    if(no==0)
    {

        printf(" invalid number please enter positive number");
    }
    for(fact=1,temp=no;temp>1;temp--)
    {

    fact=fact*temp;
    }
    printf("\n factorial of %d is =%d",no, fact);

    printf(" thank you");

    return 0;





}