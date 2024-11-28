#include <stdio.h>
#include <math.h>

float price_per_L;
int amount;
float conversion;
float gallons;

int main(int argc, char const *argv[])
{
    // Input stuff
    printf("Enter the price of petrol per liter (in SEK): ");
    scanf("%f", &price_per_L);
    
    printf("Enter the amount of petrol (in liters): ");
    scanf("%d", &amount);

    printf("Enter the USD to SEK exchange rate: ");
    scanf("%f", &conversion);
    
    // calc stuf
    gallons = (float) amount / 3.78541f;
    float total_SEK = amount * price_per_L;
    float total_USD = total_SEK / conversion;
    
    // print stuff
    printf("\n--- Fuel Cost Calculation ---");
    printf("\n%d literes at the price of %f per liter", amount, price_per_L);
    printf("\nis equel to %f USD and %f gallons.", total_USD, gallons);
    printf("Total cost in SEK: %f SEK", total_SEK);
    return 0;
}
