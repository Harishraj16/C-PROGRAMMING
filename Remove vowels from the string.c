//Brute force approach

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

//Optimal Approach:

#include <stdio.h>
#include <string.h>

int main() {
  char str[100];
  printf("Enter the string: ");
  scanf("%s", str);

  int length = strlen(str);
  int consonantIndex = 0;

  for (int i = 0; i < length; i++) {
    if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u') {
      str[consonantIndex++] = str[i];
    }
  }

  str[consonantIndex] = '\0'; // Add null terminator to the end of the consonant string

  printf("Consonants: %s", str);
  return 0;
}
