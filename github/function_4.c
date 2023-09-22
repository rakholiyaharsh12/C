#include<stdio.h>

void greaterthan()
{
    int number;

    printf("enter number");
    scanf("%d",&number);

    if(number>100)
    {
        printf("number is graterthan 100");
    }
    else
    {
        printf("not graterthan 100");
    }
}
int main()
{
    greaterthan();
    return 0;
}