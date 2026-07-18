/*
Monthly Sales Analysis 
A supermarket has m branches and records sales for n days.
Use a m × n 2D array.
Perform the following:
1.Input daily sales.
2.Display sales report.
3.Find total sales of each branch.
4.Find total sales of each day.
5.Find the branch with the highest weekly sales.
6.Find the day with the highest total sales.
*/
#include<stdio.h>
#include<string.h>
#include"monthsalehelp.c"
int main()
{
    int row,col,i,j,n;
    printf("Enter how many branch and day:\n");
    scanf("%d%d",&row,&col);
    int arr[row][col],bra_sal[row],d_sale[col];
    printf("\nInput daily sales.\n");
    for(i=0;i<row;i++)
    {
        printf("\nEnter %d branch sales details of each days. ",i+1);
        for(j=0;j<col;j++)
        {
            printf("\nEnter %d day sale:",j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n***MENU***\n");
    printf("\n1.Display sales report.");
    printf("\n2.Find total sales of each branch.");
    printf("\n3.Find total sales of each day.");
    printf("\n4.Find the branch with the highest sales.");
    printf("\n5.Find the day with the highest total sales.");
    printf("\n6.EXIT.");
    printf("\nEnter the choice:\n");
    scanf("%d",&n);
    do{
        switch(n)
    {
        case 1:
        printf("\nDisplaying:\n");
        display(row,col,arr);
        break;
        case 2:
        //total sale of each branch
        branch_sale(row,col,arr,bra_sal);
        printf("\n");
        break;
        case 3:
        //total sale of each day
        day_sale(row,col,arr,d_sale);
        printf("\n");
        break;
        case 4:
        //Branch with highest sale
        highest_branch_sale(row,bra_sal);
        printf("\n");
        break;
        case 5:
        //day with total highest sale.
        highest_day_sale(col,d_sale);
        printf("\n");
        break;
        default:
        printf("\nIncorrect choice:");
        break;
    }
    printf("\n***MENU***\n");
    printf("\n1.Display sales report.");
    printf("\n2.Find total sales of each branch.");
    printf("\n3.Find total sales of each day.");
    printf("\n4.Find the branch with the highest sales.");
    printf("\n5.Find the day with the highest total sales.");
    printf("\n6.EXIT.");
    printf("\nEnter the choice:\n");
    scanf("%d",&n);
    }while(n!=6);
    return 0;
}