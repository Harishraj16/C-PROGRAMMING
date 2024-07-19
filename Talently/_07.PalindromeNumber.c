/*
check whether the given number is palindrome or not. If the original number and its reversed number is equal, it is said to be Palindrome.
*/


#include<stdio.h>
int main(){
  long long int n;
  scanf("%lld",&n);
  long long int rev = 0;
  long long int safe = n;
  while(n>0){
    rev = rev*10+(n%10);
    n/=10;
  }
  if(safe == rev) printf("Palindrome");
  else printf("Not a Palindrome");
  return 0;
}
