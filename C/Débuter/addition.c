#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char *argv[])
{
    int nombre1 = 0, nombre2 = 0;
    printf("Saisie du premier nombre : ");
    scanf("%d", &nombre1);
    printf("Saisie du 2nd nombre : ");
    scanf("%d", &nombre2);
    printf("(%d) + (%d) = %d\n", nombre1, nombre2, nombre1+nombre2);
    return 0;
}