#include<stdio.h>

int main(){
    int cnt=0;
    int num;
    scanf("%d",&num);
    for(int i=sizeof(int)*8-1;i>=0;i--){
        int bit=(num>>i)&1;
        if(bit==1) cnt++;
    }
    printf("%d",cnt);
}
