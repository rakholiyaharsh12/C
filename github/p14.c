#include<stdio.h>

int main()

{
  int  i,b=0,c,a;
  

  printf("enter valu: ");
scanf("%d",&a);


	for(i=1;i<=a;i++)
{
	if(a%1==0)
{
b++;
}
}
if(b<=2)
{
printf("prime: ");
}
else
{
printf("no prime");
}
return 0;
}