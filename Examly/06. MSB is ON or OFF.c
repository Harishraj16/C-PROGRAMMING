#include<stdio.h>

int main(){
    int num;
    scanf("%d",&num);
    int s=sizeof(num)*8-1;
    int bit=(num>>s)&1;
    if(1==bit) printf("MSB bit is on");
    else printf("MSB bit is off");
    return 0;
}
