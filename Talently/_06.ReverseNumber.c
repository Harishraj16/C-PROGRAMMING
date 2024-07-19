#include <stdio.h>
int main(){
  long long int n;
  scanf("%lld",&n);
  long long int rev = 0;
  while(n>0){
    rev = rev*10+(n%10);
    n/=10;
  }
  printf("%lld",rev);
  return 0;
}
