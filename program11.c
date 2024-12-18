//program 11

#include <stdio.h>
#include <string.h>

struct Product 
{
    int id;
    char name[50];
    int qty;
    float price;
} prods[10];

int main() 
{
    int n;
    float total = 0.0;
    int maxQtyIdx = 0, maxPriceIdx = 0;

    printf("Enter the Number of Products: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) 
    {
        printf("Enter details for product %d:\n", i + 1);

        printf("Product ID: ");
        scanf("%d", &prods[i].id);

        printf("Product Name: ");
        scanf("%s", prods[i].name);

        printf("Quantity: ");
        scanf("%d", &prods[i].qty);

        printf("Price (per unit): ");
        scanf("%f", &prods[i].price);

        total += prods[i].qty * prods[i].price;

        if (prods[i].qty > prods[maxQtyIdx].qty)
        {
            maxQtyIdx = i;
        }

        if (prods[i].price > prods[maxPriceIdx].price)
        {
            maxPriceIdx = i;
        }
    }

    printf("Total value of inventory: Rs%.2f\n", total);
    printf("Product with the highest quantity: %s (Quantity: %d)\n", prods[maxQtyIdx].name, prods[maxQtyIdx].qty);
    printf("Product with the highest price: %s (Price: Rs%.2f)\n", prods[maxPriceIdx].name, prods[maxPriceIdx].price);

    return 0;
}
