#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char *argv[]) // Équivalent de int main()
{
  printf("Nombre de vies : ");
  int nombreDeVies = 0;
  scanf("%d", &nombreDeVies);
  printf("Tu as %d vies\n", nombreDeVies);
  printf("***********BAM************\n");
  nombreDeVies = 4;
  printf("Tu t'es pris un sale coup dans la gueule, il te reste %d vies\n", nombreDeVies);

  return 0;
}