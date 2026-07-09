//A hospital wants to store patient details like name, age, disease, and room number. Design a program to manage and display multiple pa//tient records.
#include<stdio.h>
int main()
{
int n,i;
printf("Enter the number of patients:\n");
scanf("%d",&n);
struct hosp{
char name[20];
int age;
char disease[20];
int r_num;
}h[n];
printf("Enter All the patients details:\n");
for(i=0;i<n;i++)
{
printf("Enter %d patients details:\n",i+1);
printf("Enter the name:\n");
scanf("%s",h[i].name);
printf("Enter the age:\n");
scanf("%d",&h[i].age);
printf("Enter the name of Disease:\n");
scanf("%s",h[i].disease);
printf("Enter the room number:\n");
scanf("%d",&h[i].r_num);
}
printf("\nDisplaying the record of Patients:\n");
for(i=0;i<n;i++)
{
printf(" %d patients details:\n",i+1);
printf("Name:%s\n",h[i].name);
printf("Age:%d\n",h[i].age);
printf(" Name of Disease:%s\n",h[i].disease);
printf("R00m Number:%d\n",h[i].r_num);
}
return 0;
}
