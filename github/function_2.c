#include<stdio.h>

void multiple()
{
int num;

printf("enter number:");
scanf("%d",&num);
if(num%5==0 && num%7==0)
{
    
        printf("multiple");
    
}
        else
        {
            printf("not multiple");
        }
    
}
int main()
{
multiple();
return 0;

}