#include <stdio.h>

int main() {
    int i;
    printf("Alphabets from A to Z: ");
    for(i='A';i<='Z';i++){
        printf(" %c",i);
    }
    printf("\nAlphabets from a to z: ");
    for(i='a';i<='z';i++){
        printf(" %c",i);
    }
    return 0;
}
