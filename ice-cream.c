#include <stdio.h>

int main() {
   int order = 0, time = 0;
   float cost = 0;
   
   printf("Welcome to Fiifi's Ice Cream Shop\nWhat would you like to order?\n");
   int flavour = 0, size = 0, toppings = 0, option = 0;
   
   do {
       printf("\n1 - Vanilla\n2 - Strawberry\n3 - Chocolate\n4 - Mango\n5 - Enquiries\n");
        scanf("%d", &flavour);
        
        /*printf("1-small\n2-large\n");
        scanf("%d", &size);*/
        
        if (flavour == 5) {
            printf("A customer service agent will be with you soon.\n");
        } else if (flavour >= 1 && flavour <= 4) {
            printf("1 - small\n2 - large\n");
            scanf("%d", &size);
        
        
        if (size == 1) {
            switch (flavour) {
                case 1:
                cost += 5;
                time += 2;
                printf("Flavor: Vanilla\nSize: Small\nCost: %.2f cedis\nTime: %d mins\n", cost, time);
                    break;
                    case 2:
                        cost += 5;
                        time += 2;
                        printf("Flavor: Strawberry\nSize: Small\nCost: %.2f cedis\nTime: %d mins\n", cost, time);
                        break;
                    case 3:
                        cost += 6;
                        time += 2;
                        printf("Flavor: Chocolate\nSize: Small\nCost: %.2f cedis\nTime: %d mins\n", cost, time);
                        break;
                    case 4:
                        cost += 7;
                        time += 2;
                        printf("Flavor: Mango\nSize: Small\nCost: %.2f cedis\nTime: %d mins\n", cost, time);
                        break;
                    default:
                        printf("Invalid flavor entry.\n");
                        break;
                }
            } else if (size == 2) {
                switch (flavour) {
                    case 1:
                        cost += 8;
                        time += 3;
                        printf("Flavor: Vanilla\nSize: Large\nCost: %.2f cedis\nTime: %d mins\n", cost, time);
                        break;
                    case 2:
                        cost += 8;
                        time += 3;
                        printf("Flavor: Strawberry\nSize: Large\nCost: %.2f cedis\nTime: %d mins\n", cost, time);
                        break;
                    case 3:
                        cost += 9;
                        time += 3;
                        printf("Flavor: Chocolate\nSize: Large\nCost: %.2f cedis\nTime: %d mins\n", cost, time);
                        break;
                    case 4:
                        cost += 10;
                        time += 3;
                        printf("Flavor: Mango\nSize: Large\nCost: %.2f cedis\nTime: %d mins\n", cost, time);
                        break;
                    default:
                        printf("Invalid flavour entry.\n");
                        break;
                }
            } else {
                printf("Invalid size entry.\n");
            }
        } else {
            printf("Invalid flavor entry.\n");
        }
        
    do {
         printf("\n1 - Sprinkles\n2 - Whipped cream\n3 - Chopped nuts\n4 -Coconut shapings\n");
        scanf("%d", &toppings);
        
        switch (toppings) {
            case 1:
            cost += 2;
            time += 1;
            printf("Flavor: Sprinkles\nCost: %.2f cedis\nTime: %d mins\n", cost, time);
            break;
            case 2:
            cost += 3;
            time += 1;
            printf("Flavor: Sprinkles\nCost: %.2f cedis\nTime: %d mins\n", cost, time);
            break;
            case 3:
            cost += 4;
            time += 1;
            printf("Flavor: Sprinkles\nCost: %.2f cedis\nTime: %d mins\n", cost, time);
            break;
            case 4:
            cost += 5;
            time += 1;
            printf("Flavor: Coconut shavings\nCost: %.2f cedis\nTime: %d mins\n", cost, time);
            break;
            default:
            printf("Invalid topping entry");
        }
    } while (order > 0);
     int option;
        printf("Would you like to order anything else?\n1 - Yes\n2 - No\nAnswer: "); //If the user selects yes, "order" is incremented and the do-while loop continues
        scanf("%d", &option);
        if (option == 1){
            Sleep(500);  //A delay
            printf("\nYou've ordered a %s %s ice cream with %s topping", size[size-1], flavours[flavour-1], toppings_list[toppings-1]); 
            Sleep(500);
            printf("\nWe'll take your new order now.\n\n");
            Sleep(500);
            order ++;
        }
        else if (option == 2){
            order = 0;
            printf("\nYou've ordered a %s %s ice cream with %s topping\n", sizes[size-1], flavour[flavour-1], toppings_list[toppings-1]);
            Sleep(500); 
            printf("We'll be with you in %d minutes\nIn the meantime, be aware that the cost of your meal is %.2f cedis\n", time, cost);
        }
    }
    while(order > 0);
    printf("\n\nKindly wait for your order...");
    int timer;
    for (timer = time; timer >= 0; timer--) {
        Sleep(500);
        if (timer > 1) {
            printf("\n%d minutes remaining", timer);
        }
        else if (timer == 1) {
            printf("\n%d minute remaining", timer);
        }
        else {
            printf("\nTime's up");
        }
    }
    printf("\nHere is your order\n Thanks for coming to Fiifi's Ice Cream!");
        
   } 
   while(order > 0);

    return 0;
}
 
