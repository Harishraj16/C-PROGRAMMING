#include <stdio.h>

int main() {
    int n,copy,rev=0;
    
    printf("Enter the number: ");
    scanf("%d",&n);
    
    copy=n;
    
    while(copy>0)
    {
        rev *= 10;
        
        rev=rev+(copy%10);
        copy /=10;
    }
    
    printf("the reverse of the digit is: %d",rev);

    return 0;
}
