#include<stdio.h>
int factorcheck(int s,int n){
    for(int i=2;i<=n/2;i++){
        if(n%i==0) s+=i;
    }
    return s;
}

int main(){
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    int sum1=1;
    int sum2=1;
    sum1=factorcheck(sum1,n1);
    sum2=factorcheck(sum2,n2);
    if(sum1==n2 && sum2==n1){
        printf("Amicable Pair");
    }
    else{
        printf("Not a Amicable Pair");
    }
    return 0;
}
