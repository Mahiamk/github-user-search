#include <stdio.h>

int main() {
    char item[30];
    float price;
    int quantity;
    float totalprice;

    // Prompt for item name, handle newline issue
    printf("Enter item name: \n");
    scanf(" %[^\n]", item);  // Read a line of text with spaces

    // Prompt for price
    printf("Enter the price: \n");
    scanf("%f", &price);

    // Prompt for quantity
    printf("Enter the quantity: \n");
    scanf("%d", &quantity);

    // Calculate total price
    totalprice = price * quantity;

    // Display the result
    printf("The total price of %s is %.2f\n", item, totalprice);  // Display with 2 decimal places

    return 0;
}
