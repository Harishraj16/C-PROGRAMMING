#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter the string: ");
    scanf("%s",str);
    str[strlen(str)]='\0';
    int length=strlen(str);
    char result[100];
    int ind=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u') continue;
        result[ind]=str[i];
        ind++;
    }
    printf("%s",result);
    return 0;
}
