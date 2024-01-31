#include <stdio.h>

int isAutomorphic(int n){
    int square = n*n;
    while (n > 0) {
        if (n % 10 != square % 10) {
            return 0; // Not an automorphic number
        }
        n /= 10;
        square /= 10;
    }
    return 1; 
}
int main() {
    int num;
    printf("Enter num: ");
    scanf("%d", &num);
    if (isAutomorphic(num)) printf("Automorphic number\n");
    else printf("Not an Automorphic number\n");
    return 0;
}
