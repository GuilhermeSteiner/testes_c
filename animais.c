#include <stdio.h>

int main () {

   int linhas;
   int coelhos = 0;
   int sapos = 0;
   int ratos = 0;

   scanf("%d", &linhas);

   for (int i = 0; i < linhas; i++) {

      int quantia;
      char animal;
      scanf("%d %c", &quantia, &animal);

      switch (animal) {

         case 'C':
         coelhos += quantia;
         break;

         case 'S':
         sapos += quantia;
         break;

         default:
         ratos += quantia;
      }

   }

   printf("Total: %d cobaias\n", coelhos + sapos + ratos);
   printf("Total de coelhos: %d\n", coelhos);
   printf("Total de ratos: %d\n", ratos);
   printf("Total de sapos: %d\n", sapos);
   printf("Percentual de coelhos: %.2f %%\n", 100 * coelhos / (double)(coelhos + ratos + sapos));
   printf("Percentual de ratos: %.2f %%\n", 100 * ratos / (double)(coelhos + ratos + sapos));
   printf("Percentual de sapos: %.2f %%\n", 100 * sapos / (double)(coelhos + ratos + sapos));



   return 0;
}