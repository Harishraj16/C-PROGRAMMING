#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int sum=1;
    for(int i=2;i<=n/2;i++){
        if(n%i==0) sum+=i;
    }
    if(sum==n)
        printf("Perfect Number");
    else
        printf("Not a Perfect Number");
    return 0;
}
