#include<stdio.h>
#include<conio.h>
int main()
{
  int no1=0,no2=0,power=1,temp=0;
  printf("\n enter a number 1 =");
  scanf("%d",&no1);
  printf("\n enter a number 2 =");
  scanf("%d",&no2);
  temp=no2;
  while(temp>0)
  {
      power=power*no1;
      temp--;
  }
  printf("\n power of %d raise to %d = %d",no1,no2,power);
  getch();
  return 0;
}
