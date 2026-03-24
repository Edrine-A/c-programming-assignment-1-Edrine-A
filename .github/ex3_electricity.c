/* Name: SSEKYANZI EDRINE ALLAN */
/* Student Number: 25/U/BIO/030/GV */

#include <stdio.h>
int main(){
//declaring variables
    float units, cost_per_unit, total_bill;
//enter units consumed
    printf("Enter units consumed: ");
    scanf("%f", &units);
//enter cost per unit
    printf("Enter cost per unit: UGX ");
    scanf("%f", &cost_per_unit);
//calculate total bill
    total_bill = (units * cost_per_unit);
//display total bill
    printf("Total bill: %.2f UGX\n", total_bill);

    return 0;

    
}
