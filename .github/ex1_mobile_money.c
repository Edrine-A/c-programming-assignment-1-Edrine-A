/* Name: SSEKYANZI EDRINE ALLAN */
/* Student Number: 25/U/BIO/030/GV */

#include <stdio.h>
int main(){
//Declare variables
    float amount, transaction_fee,Transaction_Fee,Total_Deducted;
//display prompts to enter and read user amount
    printf("Enter Amount To Send:");
    scanf("%f", &amount);
//display and enter transaction fee
    printf("Enter Transaction Fee(%):");
    scanf("%f",&transaction_fee);
//Calculate transaction fee and total deducted amount
    Transaction_Fee = (amount*transaction_fee)/100;
    Total_Deducted = (amount+Transaction_Fee);
//display the transaction fee and total deducted amount
    printf("Transaction Fee: %.2f UGX\n", Transaction_Fee);
    printf("Total Deducted: %.2f UGX\n", Total_Deducted);
//Mini receipt/Report
    printf("------TRANSACTION SUMMARY----------\n");
    printf("Amount Sent: %.2f UGX\n", amount);
    printf("Fee: %.2f UGX\n", Transaction_Fee);
    printf("Total Deducted: %.2f UGX\n", Total_Deducted);
    printf("-------------------------------------\n");

    return 0;



}
