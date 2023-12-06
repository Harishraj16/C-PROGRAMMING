#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter the string: ");
    scanf("%s",str);
    int length=strlen(str)-1;
    for(int i=0;i<length;i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            char temp = str[i];
            str[i]=str[i+1];
            str[i+1]=temp;
        }
    }
    printf("Result: %s",str);
    return 0;
}
