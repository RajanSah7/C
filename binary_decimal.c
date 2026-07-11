#include<stdio.h>
#include<math.h>
int main()
{   
    int num,sum=0,i=0,n_1=0,rem=0;
    printf("Enter the binary number:");
    scanf("%d",&num);
    n_1=num;
    while(num!=0)
    {
        rem=num%10;
        sum = sum+rem*pow(2,i);
        num=num/10;
        i++;
    }
    printf("%d",sum);
    printf("%d",n_1);
    printf("Decimal number of %d is %d",n_1,sum);
    printf("\n");
    return 0;
}