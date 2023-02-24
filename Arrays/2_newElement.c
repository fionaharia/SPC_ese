//program to insert new elements in array
#include<stdio.h>
int main()
{
    int arr[20],i,n,pos,new;
    printf("enter the no. of elements\n");
    scanf("%d",&n);

    printf("enter %d elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("enter the position and number");
    scanf("%d%d",&pos,&new);
    
    n=n+1;
    for(i=n-1;i>=pos;i--)
    arr[i]=arr[i-1];

    arr[pos-1]=new;

    for(i=0;i<n;i++)
    printf("%d ",arr[i]);

    return 0;


}