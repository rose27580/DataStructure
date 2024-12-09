#include<stdio.h>
void main()
{
int a[50],i,n,s;
printf("enter the size of array : ");
scanf("%d",&n);
printf("\n enter the array elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("the array elements are:\n");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
printf("\n enter the number to be search is:\n");
scanf("%d",&s);
printf("\n the element to be search is : %d",s);
for(i=0;i<n;i++)
{
if(a[i]==s)
{
printf("\n the given number position is %d \n",i+1);
break;
}
}
if(i==n)
{
printf("\n the given number is not in the list");
}
}
