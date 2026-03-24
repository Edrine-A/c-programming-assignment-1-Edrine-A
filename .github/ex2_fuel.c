/* Name: SSEKYANZI EDRINE ALLAN */
/* Student Number: 25/U/BIO/030/GV */

#include <stdio.h>
int main(){
//declare variables
    float distance, fuel_used, fuel_efficiency;
//enter distance
    printf("Enter Distance (km):");
    scanf("%f", &distance);
//enter fuel used
    printf("Enter Fuel Used (litres):");
    scanf("%f", &fuel_used);
//calculation for fuel efficiency
    fuel_efficiency = distance/fuel_used;
//display fuel efficiency
    printf("Fuel Efficiency: %.2f km/l\n", fuel_efficiency);

return 0;

    
}
