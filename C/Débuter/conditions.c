#include <stdio.h>
#include <stdlib.h>

int main()
{
    int commande = 0;
    printf("*** PLATS ***\n1. CheeseBurger\n2. HappyMeal\n3. Mac Salade\n4. Wrap\nQuel plat vous intéresse ? ");
    scanf("%d", &commande);
    switch (commande)
    {
    case 1:
        printf("Vous avez commandé un CheeseBurger !\n");
        break;
    case 2:
        printf("Vous avez commandé un HappyMeal !\n");
        break;
    case 3:
        printf("Vous avez commandé un Mac Salade !\n");
        break;
    case 4:
        printf("Vous avez commandé un Wrap !\n");
        break;
    default:
        printf("Pas de plats sélectionnés.\n");
        break;
    }
    return 0;
}