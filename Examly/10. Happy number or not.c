#include<stdio.h>

int squareofdigits(int n){
    int sum=0;
    while(n>0){
        int rem = n%10;
        sum += rem*rem;
        n = n/10;
    }
    return sum;
}

bool ishappy(int n){
    if(n==1) return 1;
    else if(n==4) return 0;
    else{
        return ishappy(squareofdigits(n));
    }
}

int main(){
    int n;
    scanf("%d",&n);
    if(ishappy(n)){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}
