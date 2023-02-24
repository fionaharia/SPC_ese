// print student record with ascending value of roll no
//IMP POINT: temp should be of struct data type and NOT int
#include<stdio.h>
void main()
{
    struct Student
    {
        char name[20];
        int rollno;
    };
    struct Student s[5],temp;
    int i;

    for(i=0;i<5;i++)
    {
        printf("enter name and roll no\n");
        scanf("%s%d",&s[i].name,&s[i].rollno);
    }

    //sorting
    int j;
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(s[i].rollno>s[j].rollno)
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }

 printf("Sorted records are:\n");
 for(i=0;i<5;i++)
 {
  printf("Name: %s\n", s[i].name);
  printf("Roll: %d\n", s[i].rollno);
 }

}