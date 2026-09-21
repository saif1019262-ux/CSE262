#include <stdio.h>
int main() {
    float units,ibill,total_bill, surcharge;
    printf("Enter total units consumed: ");
    scanf("%f", &units);
    if (units <= 50)ibill = units * 0.50; 
    else if (units <= 150)ibill = (50 * 0.50) + ((units - 50) * 0.75); 
    else if (units <= 250)ibill = (50 * 0.50) + (100 * 0.75) + ((units - 150) * 1.20);
    else ibill= (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((units - 250) * 1.50);
    surcharge = ibill* 0.20;
    total_bill = ibill + surcharge;
    printf("Total Amount   : %.2f TK\n", total_bill);
    return 0;
}