#include<stdio.h>

int main()
{
    int a = 20,*p;

    p =&a;

    printf("vlue of a is :%d\n",a);
    printf("Adddress of a is :%d\n",a);
    printf("Adddress of a in p is :%d\n",p);
    printf("Adddress of p is :%d\n",&p);
    printf("vlue of a in p is :%d\n",*p);
}