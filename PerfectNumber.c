#include <stdio.h>

int sumofdivisors(int num){
    int sum = 0;
    for(int i=1;i<=num/2;i++){
        if(num%i==0) sum += i;
    }
    return sum;
}

int main() {
    int num;
    scanf("%d", &num);
    int target = num;
    int sum = sumofdivisors(num);
    if (sum == target) printf("Perfect number\n");
    else printf("Not a Perfect number\n");
    return 0;
}
