#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter that String:");
    fgets(str,sizeof(str),stdin);
    int length = strlen(str)-1;
    int palin=1;
    
    for(int i=0;i<length/2;i++){
        if(str[i]!=str[length-i-1]){
            palin=0;
            break;
        }
    }
    if(palin){
        printf("Palindrome");
    }
    else{
        printf("Not a Palindrome");
    }
    return 0;
}
