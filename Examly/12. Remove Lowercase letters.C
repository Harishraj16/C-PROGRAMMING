#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int length = strlen(str);
    int ind=0;
    for(int i=0;i<length;i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[ind]=str[i];
            ind++;
        }
    }
    str[ind]='\0';
    printf("%s",str);
    return 0;
}
