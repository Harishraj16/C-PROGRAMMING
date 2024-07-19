/*
Find whether the given number is armstrong or not. The number of its digit raised to the sum of power of individual digits, is equal to the original number.

Eg: 153,here the number of digits is 3. So, 1^3+5^3+3^3=153.
*/



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
