#include<stdio.h>
#include<string.h>
int main(){
    char  str1[1000];
    char  str2[1000];
    char  ans[10000];
    scanf("%s",str1);
    scanf("%s",str2);
    int cnt1=0,cnt2=0;
    for(int i=0;str1[i]!='\0';i++){
        cnt1++;
    }
    for(int i=0;str2[i]!='\0';i++){
        cnt2++;
    }
    int j=0;
    for(int i=cnt1;i<=cnt1+cnt2;i++){
        str1[i]=str2[j];
        j++;
    }
    printf("%s",str1);
    return 0;
}
