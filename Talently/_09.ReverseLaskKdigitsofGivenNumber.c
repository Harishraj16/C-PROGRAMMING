#include <stdio.h>
int main(){
  long long int n;
  int k;
  scanf("%lld\n%d",&n,&k);
  long long int rev = 0;
  int i=0;
  while(i<k){
    rev = rev*10+(n%10);
    n/=10;
    i++;
  }
  
  while(k>0){
    n*=10;
    k--;
  }
  printf("%lld",n+rev);
  
  return 0;
}
