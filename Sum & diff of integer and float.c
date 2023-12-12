#include <stdio.h>
int main()
{
    int a,b;
    float c,d;
    printf("Enter two integers:");
    scanf("%d%d",&a,&b);
    printf("Enter two Floats:");
    scanf("%f%f",&c,&d);
    printf("Integer \nSum: %d  \nDiff: %d\n",a+b,a-b);
    printf("Float  \nSum: %.1f \nDiff: %.1f",c+d,c-d);
    return 0;
}
