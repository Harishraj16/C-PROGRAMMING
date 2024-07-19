/*
Find whether the given number is strong number or not. The sum of factorial of each digit, is equal to the original number.
*/



#include<stdio.h>
long long int factorial(long long int n){
  if(n==1) return 1;
  return n*factorial(n-1);
}
int main(){
  long long int n;
  scanf("%lld",&n);
  long long int safe = n;
  long long int sum = 0;
  while(n>0){
    int digit = n%10;
    sum+=factorial(digit);
    n/=10;
  }
  if(sum==safe) printf("Strong Number");
  else printf("Not a strong number");
  return 0;
}
