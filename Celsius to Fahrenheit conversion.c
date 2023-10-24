#include <stdio.h>
float faren(float c){
    float f;
    f=(c*1.8+32);
    return f;
}
int main() {
    float c,f;
    printf("Enter the celsius: ");
    scanf("%f",&c);
    f=faren(c);
    printf("fahrenhiet: %.2f",f);
    return 0;
}
