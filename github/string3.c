#include<stdio.h>

int main()
{
  char a[50],d[50];
  int i,b=0,c=0;

        printf("enter string"); 
	scanf("%[^\n]s",&a); // harsh

	for(i=0;a[i]!='\0';i++)
	 { 
	     b++;
     	}
         b--;
   	for(i = b;i >= 0;i--)
   	{
   	    d[c]=a[i];
   	    c++;
    }
   	
    d[c]='\0';
    printf("%s",d);
    
return 0;
}