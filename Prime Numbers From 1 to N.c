#include <stdio.h>
int isprime(int n){
    if(n<=1)
    return 0;
    
    for(int j=2;j*j<=n;j++){
        if(n%j == 0)
        return 0;
    }
    return 1;
}
int main() {
    int N;
    printf("Enter the number: ");
    scanf("%d",&N);
    int count = 0;
    printf("Prime numbers: ");
    for(int i=1;i<=N;i++){
        if(isprime(i)){
            printf("%d ",i);
            count++;
        }
    }
    printf("\nprime number count: %d",count);

    return 0;
}
