#include<stdio.h>
void num()
{
    int a,i;

    printf("entera value");
    scanf("%d",&a);

    for(i=0;i<a;i++)
    {
        printf("%d hello world\n",i);
    }
    printf("i: %d",i);
}
int main()
{
    num();
    return 0;
}