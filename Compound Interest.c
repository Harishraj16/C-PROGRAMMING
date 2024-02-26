#include <stdio.h>
#include <math.h>
float CI(float p,float r,float t){
    float ci=p*(pow((1+r/100),t));
    return ci;
} 
int main() {
    float P,T,R,N,intrest;
    printf("Principal Amount: ");
    scanf("%f",&P);
    printf("Interst Rate: ");
    scanf("%f",&R);
    printf("Time period: ");
    scanf("%f",&T);
    float interest=CI(P,R,T);
    printf("Compound Interest: %.2f",interest);
    return 0;
}
