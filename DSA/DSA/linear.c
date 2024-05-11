//program for linear search
#include<stdio.h>
int main()
{
int a[100],key,i,n;
printf("Enter how many numbers are in array:");
scanf("%d",&n);
printf("enter items in array:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter key element to be search:");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(a[i]==key)
{
printf("\nkey found at index no=%d",i);
break;
}
}
if(i==n)
{
printf("\n key not found.");
}

return 0;
}
