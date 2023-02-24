//find frequency of each character

#include<stdio.h>
#include<string.h>

int main()
{
    char str[100],c;
    int i,cnt=0;
    printf("enter a string\n");
    gets(str);
    for(c='a';c<='z';c++)
    {
        cnt=0;
        for(i=0;str[i]!='\0';i++)
        {
          if(c==str[i])
          cnt++;
        }
        if(cnt>0)
        printf("%c = %d\n",c,cnt);
    }
    return 0;
}
