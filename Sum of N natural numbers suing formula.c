#include <stdio.h>

int main() {
   int s,n;
   printf("Enter the number: ");
   scanf("%d",&n);
   s=n*(n+1);
   s=(int)(s/2);
   printf("Sum: %d",s);
    return 0;
}
