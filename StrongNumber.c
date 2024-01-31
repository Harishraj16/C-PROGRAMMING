#include <stdio.h>
int fact(int num){
    int sum = 1;
    for(int i=2;i<=num;i++){
        sum *= i;
    }
    return sum;
}
int isStrong(int n,int target) {
    static int sum = 0;
    if(n==0){
        if(sum == target) return 1;
        else return 0;
    }
    int rem = n % 10;
    sum = sum + fact(rem);
    return isStrong(n / 10,target);
}

int main() {
    int num;
    scanf("%d", &num);
    int check = isStrong(num,num);
    
    if (check) printf("Strong number\n");
    else printf("Not a Strong number\n");
    return 0;
}
