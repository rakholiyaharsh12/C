#include<stdio.h>
void positive()
{
    int a;
    printf("enter a");
    scanf("%d",&a);
    if(a>0)
    {
        printf("number is positive");
    }
    else
    {
        printf("number is nagative");
    }
}
int main()
{
    positive();
    return 0;
}