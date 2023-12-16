#include<stdio.h>
#include<string.h>
int main(){
    char str[200];
    fgets(str,sizeof(str),stdin);
    int n=strlen(str);
    for(int i=0;i<n;i++){
        if(i==0 || i==n-1){
            if(str[i]>='A' && str[i]<='Z')
            continue;
            else
            str[i] = str[i]-32;
        }
        else if(str[i]==' '){
            if(str[i]>='A' && str[i]<='Z') continue;
            else{
            str[i-1] -= 32;
            str[i+1] -= 32;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%c",str[i]);
    }
    return 0;
}
