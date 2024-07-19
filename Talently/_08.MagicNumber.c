/*
Check whether the number is a magic number. Magic number is a number where product of sum of digits and sum reverse is equal to the same number. For example, consider n=1729 sum of digits = (1 + 7 + 2 + 9 => 19) Reverse of 19 is 91 (19 X 91 = 1729)
*/



#include <stdio.h>
int main(){
  long long int n;
  scanf("%lld",&n);
  long long int safe = n;
  long long int sum = 0;
  while(n>0){
    sum += n%10;
    n/=10;
  }
  long long int rev = 0;
  long long int sum_safe = sum;
  while(sum>0){
    rev = rev*10+(sum%10);
    sum/=10;
  }
  if((sum_safe * rev) == safe) printf("YES");
  else printf("NO");
  return 0;
}
