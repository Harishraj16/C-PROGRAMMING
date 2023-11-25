#include <stdio.h>

int fact(int n)
{
    if(n<=1)
    return 1;
    
    return n*fact(n-1);
}

int main(){
    int n;
    printf("Enter the Number: ");
    scanf("%d",&n);
    int c=fact(n);
    printf("Factorial of %d:%d ",n,c);
}
