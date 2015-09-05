#include <stdio.h>
#include <conio.h>
#define max 100
void main()
{
  int a[max],i,j,t,n;
  printf("enter no. of elements to be entered \n");
  scanf("%d",&n);
  printf("\n enter elements");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);

  for(i=0;i<n-1;i++)
  {
     for(j=0;j<n-1-i;j++)
     {
       if(a[j]>a[j+1])
       {
        t=a[j];
        a[j]=a[j+1];
        a[j+1]=t;

       }


     }

  }
   printf("sorted array \n");
   for(i=0;i<6;i++)
   printf("%d ",a[i]);
}

