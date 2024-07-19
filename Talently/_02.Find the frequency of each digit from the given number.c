#include <stdio.h>
int main(){
  int arr[10]={0};
  long long int n;
  scanf("%lld",&n);
  while(n>0){
    int digit = n%10;
    arr[digit]+=1;
    n/=10;
  }
  for(int i=0;i<10;i++){
    printf("%d occurs %d times\n",i,arr[i]);
  }
  return 0;
}
    
