#include<stdio.h>
void main()
{
    int i,n,sum=0,heights[50];
    float avg;
    
    printf("Enter the number of students: ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        printf("student %d: ",i);
        scanf("%d",&heights[i]);
        sum=sum+heights[i];
    }
    printf("Sum: %d\n",sum);
    printf("Average: %f",((float)sum/n));
    
}
