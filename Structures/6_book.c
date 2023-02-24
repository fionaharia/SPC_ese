//Accept and display record of one book using nested structure.

#include<stdio.h>
void main()
{
    struct Book
    {
        char title[20];
        char publications[20];
        int pages;
        struct Author
        {
            char name[20];
            char email[20];
        }auth;
    };
    struct Book bk;
    printf("enter the title,publication and no. of pages\n");
    scanf("%s %s %d",&bk.title,&bk.publications,&bk.pages);
    printf("enter the name and email-id of the author\n");
    scanf("%s %s",&bk.auth.name,&bk.auth.email);
    printf("DETAILS: \n");
    printf("%s\n%s\n%d\n%s\n%s",bk.title,bk.publications,bk.pages,bk.auth.name,bk.auth.email);
}