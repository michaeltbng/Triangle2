#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,f;

 for (i=1; i<=24; i++)
 {
   for(f=24; f>=i; f--)
   {
    printf(" ");
   }
   for(j=1; j<=i; j++)
   {
    printf("*");
   }
 printf("\n");
 }
 getch();
}
