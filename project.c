#include <stdio.h>

int main()
{
    int id[50];
    float price[50];
    int quantity[50];

    int n = 0;
    int choice;
    int i, j;

    int searchID;
    int found;

    int tempID;
    float tempPrice;
    int tempQuantity;

    do
    {
        printf("\n SUPERMARKET INVENTORY \n");
        printf("Enter 1 to Add Product\n");
        printf("Enter 2 to Display Products\n");
        printf("Enter 3 to Search Product\n");
        printf("Enter 4 to Sort by Price\n");
        printf("Enter 5 to Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);


        if(choice == 1)
        {
            printf("\nEnter Product ID: ");
            scanf("%d", &id[n]);

            printf("Enter Price: ");
            scanf("%f", &price[n]);

            printf("Enter Quantity: ");
            scanf("%d", &quantity[n]);

            n++;

            printf("Product added successfully!\n");
        }


        else if(choice == 2)
        {
            printf("\nID\tPrice\tQuantity\n");

            for(i = 0; i < n; i++)
            {
                printf("%d\t%.2f\t%d\n", id[i], price[i], quantity[i]);
            }
        }


        else if(choice == 3)
        {
            printf("\nEnter Product ID to search: ");
            scanf("%d", &searchID);

            found = 0;

            for(i = 0; i < n; i++)
            {
                if(id[i] == searchID)
                {
                    printf("\nProduct Found!\n");
                    printf("ID: %d\n", id[i]);
                    printf("Price: %.2f\n", price[i]);
                    printf("Quantity: %d\n", quantity[i]);

                    found = 1;
                    break;
                }
            }

            if(found == 0)
            {
                printf("Product not found!\n");
            }
        }


        else if(choice == 4)
        {
            for(i = 0; i < n - 1; i++)
            {
                for(j = i + 1; j < n; j++)
                {
                    if(price[i] > price[j])
                    {

                        tempID = id[i];
                        id[i] = id[j];
                        id[j] = tempID;


                        tempPrice = price[i];
                        price[i] = price[j];
                        price[j] = tempPrice;


                        tempQuantity = quantity[i];
                        quantity[i] = quantity[j];
                        quantity[j] = tempQuantity;
                    }
                }
            }

            printf("\nProducts sorted by price!\n");
        }

        else if(choice == 5)
        {
            printf("\nProgram ended.\n");
        }

        else
        {
            printf("\nInvalid choice!\n");
        }

    } while(choice != 5);

    return 0;
}

