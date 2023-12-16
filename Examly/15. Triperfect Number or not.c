#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            if(n/i==i){
                sum += i;
            }else{
            sum += i+n/i;
            }
        }
    }
    if(sum == n*3){
        printf("Triperfect Number");
    }
    else{
        printf("Not a Triperfect Number");
    }
    return 0;
}
