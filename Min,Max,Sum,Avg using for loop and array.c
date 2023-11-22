// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i,arr[50],max,min,size,sum=0,avg;
    
    printf("enter the number of elements:");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        printf("element %d: ",i);
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    min=arr[0];
    for(i=0;i<size;i++)
    {
       if(max<arr[i])
       max=arr[i];
       
       if(min>arr[i])
       min=arr[i];
    }
    for(i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }
    avg=sum/size;

    printf("Max: %d\n",max);
    printf("Min: %d\n",min);
    printf("Sum: %d\n",sum);
    printf("Avg: %d",avg);
    return 0;
}
