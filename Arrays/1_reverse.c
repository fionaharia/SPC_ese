//find reverse array
#include<stdio.h>
int main()
{
    int arr[20],i,n;
    printf("enter the no. of elements");
    scanf("%d",&n);

    printf("enter %d elements",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    //array in the input form
    printf("ARRAY IN THE INPUT FORM\n");
    for(i=0;i<n;i++)
    printf("%d ",arr[i]);
    printf("\n");
    printf("ARRAY IN IT'S REVERSE FORM\n");
    for(i=n-1;i>=0;i--)
    printf("%d ",arr[i]);

}