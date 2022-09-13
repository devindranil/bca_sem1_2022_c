// write a c program to calculate the income of n employees. n is given by the user. condition:- income is sum of 12 months salary + HRA - expenses (expenses will be take from user)

#include<stdio.h>
int main()
{
    int n,i;
    float salary,hra,expenses,income;
    printf("Enter the number of employees: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        //print th employee number
        printf("Enter the salary of employee %d:\n ",i);
        scanf("%f",&salary);
        printf("Enter the HRA of employee %d:\n ",i);
        scanf("%f",&hra);
        printf("Enter the expenses of employee %d:\n ",i);
        scanf("%.2f",&expenses);
        income=salary*12+hra-expenses;
        printf("The income of employee %d is %.2f\n",i,income);
    }
}
