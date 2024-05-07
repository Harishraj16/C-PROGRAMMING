#include <stdio.h>
void ispalindrome(int num){
    int temp = num,newnum = 0,sum = 0,product = 1;
    while(temp>0){
        int last = temp%10;
        newnum = newnum*10+last;
        sum += last;
        product *= last; 
        temp/=10;
    }
    if(num == newnum) printf("Product: %d",product);
    else printf("Sum: %d",sum);
}
int main() {
    int num;
    scanf("%d",&num);
    ispalindrome(num);
    return 0;
}
