#include <stdio.h>

#define EXCHANGE_RATE 147  // Current exchange rate: 1 USD = 147 KES

int main() {
    float dollars, shillings;
    
    // Get input from user
    printf("Enter amount in US Dollars: $");
    scanf("%f", &dollars);
    
    // Calculate conversion
    shillings = dollars * EXCHANGE_RATE;
    
    // Display result
    printf("%.2f USD = %.2f KES\n", dollars, shillings);
    
    return 0;
}
