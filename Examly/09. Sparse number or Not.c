#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int cnt=0;
    for(int i=sizeof(int)*8-1;i>=0;i--){
        int bit = (n>>i)&1;
        if(bit==1){
            cnt++;
            if(cnt==2){
                printf("False");
                return 0;
            }
        }
        else if(bit==0) cnt=0;
    }
    printf("True");
}
