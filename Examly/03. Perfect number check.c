#include<stdio.h>

int main(){
    int n1;
    scanf("%d",&n1);
    int sum=1;
    for(int i=2;i<=n1/2;i++){
        if(n1%i==0) sum+=i;
    }
    if(sum==n1)
        printf("Perfect Number");
    else
        printf("Not a Perfect Number");
    return 0;
}
