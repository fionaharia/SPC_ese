//Write a program to delete all consonants from the string "Hello, have a good day"
#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char str[]="hello, have a good day";
    char newstr[]="";
    int len=strlen(str);

    for(i=0;i<len;i++)
    {
        char ch=str[i];
        if(ch=='a' || ch=='e' || ch=='i'|| ch=='o'|| ch=='u')
        newstr[i]=ch;
    }

    for(i=0;i<30;i++)
    {
      printf("%c",newstr[i]);
    }
}