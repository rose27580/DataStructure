#include<stdio.h>
void main()
{
int a[10],i,n,pos;
printf("enter the limit");
scanf("%d",&n);
printf("enter the array elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\n given array is:");
for(i=0;i<n;i++)
{
printf("\n %d",a[i]);
}
printf("enter the position to be deleted");
scanf("\n %d",&pos);
for(i=pos-1;i<n;i++)
{
a[i]=a[i+1];
}
printf("\n converted array:");

for(i=0;i<n-1;i++)
{
printf("%d",a[i]);
}
}

