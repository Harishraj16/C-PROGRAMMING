#include <stdio.h>
long long int power(int digit, int count){
  long long int res = 1;
  for(int i=0;i<count;i++){
    res = res*digit;
  }
  return res;
}
int main(){
  long long int n;
  scanf("%d",&n);
  long long int safe = n;
  int count = 0;
  while(n>0){
    count++;
    n/=10;
  }
  n = safe;
  long long int sum = 0;
  while(n>0){
    int digit = n%10;
    sum += power(digit,count);
    n/=10;
  }
  if(sum == safe) printf("Armstrong number");
  else printf("Not an Armstrong number");
  return 0;
}
