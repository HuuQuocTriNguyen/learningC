#include <stdio.h>
#include <string.h>

int main() {
    char items[50] = "";
    float price = 0.0f;
    int quantity = 0;
    float total = 0.0f;

    printf("What item would you like to buy?: ");
    fgets(items, sizeof(items), stdin); // We use fgets because scanf stop in the first space of an input, which is not optimize for a string array (destination, max_size, input_source)
    items[strlen(items) - 1] = '\0'; // This remove the \n from the last letter of a string, avoiding unwanted newline.
  
    printf("What is the price for each?: ");
    scanf("%f", &price);
    printf("How many would you like?: ");
    scanf("%i", &quantity);

    total = price * quantity;

    printf("\nYou have brought %d %s(s)\n", quantity, items);
    printf("The total is: $%.2f\n", total);

    return 0;
}