#include<stdio.h>

int main()
{
   char a[40];
   int b=0; 
   {
      printf("enter string =");
      scanf("%[^\n]s",&a);
   }

	for(int i=0;a[i]!='\0';i++)
{
  	printf("%c",a[i]);
	b++;
}
    printf("%d",b);
    printf("\n");
return 0;
}
