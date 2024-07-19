/*
Check whether the given two numbers are Anagram or not. Two numbers are said to be as anagram if both numbers formed with same digits.
*/


#include<stdio.h>
int main(){
  long long int n1,n2;
  scanf("%lld\n%lld",&n1,&n2);
  int arr1[10]={0};
  int arr2[10] = {0};
  while(n1>0){
    int digit = n1%10;
    arr1[digit]+=1;
    n1/=10;
  }
  while(n2>0){
    int digit = n2%10;
    arr2[digit]+=1;
    n2/=10;
  }
  int flag  = 1;
  for(int i=0;i<10;i++){
    if(arr1[i]!=arr2[i]){
      flag = 0;
      break;
    }
  }
  if(flag) printf("Anagram");
  else printf("Not");
  
  return 0;
}
