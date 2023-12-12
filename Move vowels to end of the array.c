#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter the string: ");
    scanf("%s",str);
    int length= strlen(str);
    int final = length;  //Have a separate variable for last char because inside the loop legth variable is getting changed 
    for(int i=0;i<length;i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            char temp = str[i];
            for(int j=i;j<length;j++){
                str[j]=str[j+1];
            }
            str[final-1]=temp; //if here length variable is used then it vowels in the end will be in reverse order. (it is not a problem but for convention i use final variable separately)
            length = length-1;
        }
    }
    printf("Result: %s",str);
    return 0;
}
