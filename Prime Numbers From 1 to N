#include <stdio.h>
int isprime(int n){
    if(n==0 || n==1)
    return 0;
    
    for(int j=2;j<=n/2;j++){
        if(n%j == 0)
        return 0;
    }
    return 1;
}
int main() {
    int N;
    printf("Enter the number: ");
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        if(isprime(i)){
            printf("%d ",i);
        }
    }

    return 0;
}
