#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s",str);
    str[strlen(str)]='\0';
    int length = strlen(str);
    int palin=1;
    
    for(int i=0;i<length/2;i++){
        if(str[i]!=str[length-i-1]){
            palin=0;
            break;
        }
    }
    if(palin){
        printf("Palin");
    }
    else{
        printf("Not palin");
    }
    return 0;
}
