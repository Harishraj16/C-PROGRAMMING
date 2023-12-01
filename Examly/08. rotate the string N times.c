#include<stdio.h>
#include<string.h>

void leftrotate(char str[],int n){
    int len=strlen(str);
    for(int i=0;i<n;i++){
        char temp=str[0];
        for(int j=0;j<len-1;j++){
            str[j]=str[j+1];
        }
        str[len-1]=temp;
    }
}

int main(){
    char str[100];
    int n;
    scanf("%d",&n);
    scanf("%s",str);
    leftrotate(str,n);
    printf("%s",str);
    return 0;
}
