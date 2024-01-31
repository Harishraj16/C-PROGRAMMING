#include <stdio.h>

int main() {
    int num;
    printf("Enter num: ");
    scanf("%d", &num);
    int square = (num*num);
    if (num == square%10) printf("Automorphic number\n");
    else printf("Not an Automorphic number\n");
    return 0;
}
