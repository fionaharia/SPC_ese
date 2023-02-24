//accept and display the details of the highest paid employee using structures

#include<stdio.h>
void main()
{
    struct employee
    {
        char name[20];
        int salary;
        int id;
    };
    struct employee e[5];
    int i;

    for(i=0;i<5;i++)
    {
        printf("enter name,salary and ID-no.\n");
        scanf("%s%d%d",&e[i].name,&e[i].salary,&e[i].id);
    }
    
    int maxSalary=0;

    for(i=0;i<5;i++)
    {
        if((e[i].salary)>maxSalary)
            maxSalary=e[i].salary;
    }

    printf("DETAILS OF HIGHEST PAID EMPLOYEE\n");

    for(i=0;i<5;i++)
    {
        if((e[i].salary)==maxSalary)
        {
            printf("%s %d %d",e[i].name,e[i].salary,e[i].id);
            break;
        }
    }
          
}