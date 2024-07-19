/*
Find whether the given number is Adam or Not. The square of the given number is equal to the reverse of square of reverse of the given number.

 For example, Consider the input 12. Square(12)=144 Reverse(Square(Reverse(12)))=144
*/


#include<stdio.h>
#define lli long long int 
#define square(n) ((n)*(n))

lli reverse(lli n){
  lli rev = 0;
  while(n>0){
    rev = rev*10+(n%10);
    n/=10;
  }
  return rev;
}

int main(){
  lli n,rev;
  scanf("%lld",&n);
  //lli sqr_n = square(n);
  rev = reverse(square(reverse(n)));
  if(rev == square(n)) printf("Adam Number");
  else printf("Not an Adam Number");
  return 0;
}
