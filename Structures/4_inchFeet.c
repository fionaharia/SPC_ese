//add sum of inch and feet and display the result 

#include<stdio.h>
void main()
{
    struct Distance
    {
        int feet;
        float inch;
    }d1,d2,result;

    printf("enter the first distance in feet and inch\n");
    scanf("%d%f",&d1.feet,&d1.inch);
    printf("enter the second distance in feet and inch\n");
    scanf("%d%f",&d2.feet,&d2.inch);

    result.feet=d1.feet+d2.feet;
    result.inch=d1.inch+d2.inch;

    while(result.inch>=12)
    {
        result.inch-=12;
        ++result.feet;
    }

    printf("RESULT\n");
    printf("%d feet %.1f inch",result.feet,result.inch);
}