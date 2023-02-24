//accept and display the details of 5 employees using structures

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

    printf("DISPLAY THE OUTPUT: \n");

    
    for(i=0;i<5;i++)
    {
       printf("%s %d %d\n",e[i].name,e[i].salary,e[i].id);
    }


}