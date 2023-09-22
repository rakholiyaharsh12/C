#include <stdio.h>
int english,gujarati,maths,total,marks,percent;
void get()
{
     printf("enter marks");
     scanf("%d",&english);
     scanf("%d",&gujarati);
     scanf("%d",&maths);
}
  void ha()
  {
    total=english+gujarati+maths;
    percent=(total * 100)/300;
  }
  void rsh()
  {
  if(percent > 75)
  {
    printf(" GRADE A");
  }
  else if(percent > 60 && percent <= 75)
  {
    printf("GRADE B");
  }
  else if(percent > 45 && percent <= 60)
  {
    printf("GRADE C");
  }
  else if (percent > 35 && percent <= 45)
  {
    printf("GRADE D");
  } 

  else if (percent <= 35)
  {
    printf("FAILL");
  }
  }
int main()
{
    get();
     ha();
     rsh();
}
        