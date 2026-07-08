//A shop records daily sales for n  days. Write a program to find the highest and lowest sales.

#include<stdio.h>
int main()
{
int n,i;
printf("Enter the number of days:\n ");
scanf("%d",&n);
int arr[n];
printf("Enter the daily sales:\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("Displaying The Enterd daily sales:\n");
for(i=0;i<n;i++)
{
printf("%d.\t%d\n",i+1,arr[i]);
}
int min=arr[0];
int max=arr[0];
for(i=1;i<n;i++)
{
if (min>arr[i])
{
min = arr[i];
}
if (max<arr[i])
{
max=arr[i];
}
}
printf("\nAmong all the sails the highest sales=%d Lowest sales=%d\n",max,min);
return 0;
}
