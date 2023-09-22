#include<stdio.h>

void century()
{
    int year;
     
    printf("enter year");
    scanf("%d",&year);

    if(year%100==0)
{
    printf("century year");
}
else
    {
           printf("not century year");
    }  
    
}
int main()
{
    century();

    return 0;
}