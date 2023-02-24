//seperating individual characters from string

#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char str[100];
    printf("enter a string");
    gets(str);

    for(i=0;i<strlen(str);i++)
    {

        char ch=str[i];
        printf("%c\n",ch);
    }
return 0;
}