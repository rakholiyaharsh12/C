#include<stdio.h>

int main()
{
      char a[40]; 
       int b=0,c=0;


   printf("enter a string=");
   scanf("%[^\n]s",a);	

	for(int i=0;a[i]!='\0';i++)

	{
	  printf("%c",a[i]);
          b++;
	if(a[i]==' ')
	

	{
	   c++;
	}
        }
b=b-c;
printf("%d",&b);

return 0;
}
