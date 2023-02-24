//count the number of vowels and consonants
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int cntv=0,cntc=0,i,len;

    printf("enter a string");
    gets(str);
    len=strlen(str);

    for(i=0;i<len;i++)
    {
        char ch=str[i];
        if(ch=='a' || ch=='e' || ch=='i'|| ch=='o'|| ch=='u')
        cntv++;
        else if(ch==' ')
        continue;
        else
        cntc++;
    }
    printf("NO OF VOWELS: %d\n",cntv);
    printf("NO OF CONSONANTS: %d\n",cntc);
return 0;

}
