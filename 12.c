#include <stdio.h>

int main() {
    float inr, usd;
    float exchange_rate = 76.23;
    printf("Enter the amount in INR: ");
    scanf("%f", &inr);
    usd = inr / exchange_rate;
    printf("The equivalent amount in USD is: %.2f\n", usd);
    return 0;
}
