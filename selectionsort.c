#include <stdio.h>
#include <conio.h>
#define max 10
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
     for(j=i+1;j<n;j++)
     {
       if(a[i]>a[j])
       {
        t=a[i];
        a[i]=a[j];
        a[j]=t;

       }


     }

  }
   printf("sorted array \n");
   for(i=0;i<n;i++)
   printf("%d ",a[i]);
}

