#include<stdio.h>
#include<conio.h>
#define size 5
int main()
{

int arr[size]={0};
int i=0;

printf(" enetr a array %d elements \n",size);

for(i=0; i<size; i++)
{


    printf(" array element is  %d \n",i+1);
    scanf("%d",&arr[i]);


}
printf("\n display elements");
for( i=0;i<size;i++)
{

    if(arr[i] %2 ==0)
    {

        printf(" %d is even number \n",arr[i]);
    }
    else
    {


        printf(" number  %d is odd",arr[i]);
    }


    return 0;

}







    return 0;
}