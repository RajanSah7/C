#include<stdio.h>

int main()
{   
    int num,bin[50],i=0,n_1=0;
    printf("Enter the decimal number:");
    scanf("%d",&num);
    n_1=num;
    while(num!=0)
    {
        bin[i]=num%2;
        num=num/2;
        i++;
    }
    printf("Binary number of %d is ",n_1);
    for(i=i-1;i>=0;i--)
    {
        printf("%d",bin[i]);
    }
    printf("\n");
    return 0;
}