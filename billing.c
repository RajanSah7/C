//A grocery store wants to apply discounts based on total purchase amount (e.g.,//10% if above ₹1000). Design a program for billing.

#include<stdio.h>
void discount(float);
float t_sum=0;
int main()
{
int n,i;
float sum=0;
printf("\nEnter how many items.\n");
scanf("%d",&n);
float arr[n];
printf("Enter the price of items.\n");
for(i=0;i<n;i++)
{
scanf("%f",&arr[i]);
}
printf("Displaying the item list and its price:\n");
for(i=0;i<n;i++)
{
printf("%d.\t%.2f\n",i+1,arr[i]);
}
for(i=0;i<n;i++)
{
sum = sum+arr[i];
}
discount(sum);
return 0;
}

void discount(float sum)
{
float d;
if (sum >= 1000)
{
d = (10.0/100)*sum;
printf("Discount Amount=%.2f",d);
t_sum = sum - d;
printf("\nTotal bill = %.2f",t_sum);
}
else{
t_sum = sum;
printf("\nTotal bill = %.2f",t_sum);
}
}	
