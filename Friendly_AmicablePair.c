#include <stdio.h>

int sumofdivisors(int num){
    int sum = 0;
    for(int i=1;i<=num/2;i++){
        if(num%i==0) sum += i;
    }
    return sum;
}

int main() {
    int num1,num2;
    printf("Enter num1: ");
    scanf("%d", &num1);
    printf("Enter num2: ");
    scanf("%d", &num2);
    int sum1 = sumofdivisors(num1);
    int sum2 = sumofdivisors(num2);
    if (num1 == sum1 && num2==sum2) printf("Amicable pair\n");
    else printf("Not an Amicable pair\n");
    return 0;
}
