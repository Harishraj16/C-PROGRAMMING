#include <stdio.h>

int main() {
    printf("Alphabets from A to Z: ");
    for(int i='A';i<='Z';i++){
        printf(" %c",i); 
    }
    printf("\nAlphabets from a to z: ");
    for(int i='a';i<='z';i++){
        printf(" %c",i);
    }
    return 0;
}
