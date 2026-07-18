#include<stdio.h>
//Display
void display(int row , int col, int arr[row][col]){
    int i,j;
    for(i=0;i<row;i++)
    {
        printf("Branch %d\t",i+1);
        for(j=0;j<col;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}
//Total sale of each branch
void branch_sale(int row,int col, int arr[row][col], int bra_sal[row])
{
    int sum=0,i,j;
    for(i=0;i<row;i++)
    {
        sum=0;
        for(j=0;j<col;j++)
        {
           sum += arr[i][j];  
        }
        bra_sal[i]=sum;
    }
    for(i=0;i<row;i++)
    {
        printf("Branch %d Total sale is :%d\n",i+1,bra_sal[i]);
    }
}
//Total sale of each day.
void day_sale(int row, int col, int arr[row][col],int d_sale[col])
{
    int sum=0,i,j;
    for(i=0;i<col;i++)
    {
        sum=0;
        for(j=0;j<row;j++)
        {
           sum += arr[j][i];  
        }
        d_sale[i]=sum;
    }
    for(i=0;i<col;i++)
    {
        printf("Day %d Total sale is :%d\n",i+1,d_sale[i]);
    }
}
//the branch with the highest weekly sales.
void highest_branch_sale(int row, int bra_sal[row])
{
    int i,p=0;
    int max=bra_sal[0];
    for(i=1;i<row;i++)
    {
        if (max<bra_sal[i])
        {
            max=bra_sal[i];
            p=i;
        }
    }
    printf("\nBranch %d has the highest weekly sales.",p+1);
}
//the day with the highest total sales.
void highest_day_sale(int col,int d_sale[col])
{
    int i,p=0;
    int max=d_sale[0];
    for(i=1;i<col;i++)
    {
        if (max<d_sale[i])
        {
            max=d_sale[i];
            p=i;
        }
    }
    printf("\nDay %d has the highest Total sales.",p+1);
}