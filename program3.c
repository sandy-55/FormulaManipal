//Program3

#include <stdio.h>
int main() 
{
    int units;
    float bill = 0.0;

    printf("Enter the total units consumed: ");
    scanf("%d", &units);

    switch (units > 300) 
    {
        case 1:
        {  
            bill = (100 * 5.0) + (200 * 8.0) + ((units - 300) * 10.0);
            break;
        }
        case 0:
        { 
            switch (units > 100) 
            {
                case 1:
                {  
                    bill = (100 * 5.0) + ((units - 100) * 8.0);
                    break;
                }
                case 0:
                {  
                    bill = units * 5.0;
                    break;
                }
            }
            break;
        }
    }

    printf("Total electricity bill: Rs.%0.2f\n", bill);

    return 0;
}