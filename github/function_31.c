#include <stdio.h>

void return(int c,int d)
{
    printf("value of c is :%d\n",c);
    printf("value of d is :%d\n",d);
}
int dataa(int c,int d)
{
    printf ("valueof c is %d\n",c);
    printf("value of d is %d\n",d);

    return 0;
}
int main ()
{
    int a=50,b=20;
    return(a,b);
    return('10','20 ');

    printf("value of main c is :%d",c);


    return 0;
}