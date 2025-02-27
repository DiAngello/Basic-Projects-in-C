#include <stdio.h>

int main() {
   float valorReal, taxaCambio, valorDolar, valorEuro;
   int opcao;

   printf("Bem-vindo ao Conversor de Moedas!\n");

   do {
      printf("Selecione uma opção:\n");
      printf("1 - Real para Dólar\n");
      printf("2 - Real para Euro\n");
      printf("3 - Dólar para Real\n");
      printf("4 - Euro para Real\n");
      printf("5 - Sair\n");

      scanf("%d", &opcao);

      switch (opcao) {
         case 1: {
            printf("Digite o valor em Real: ");
            scanf("%f", &valorReal);

            taxaCambio = 5.23; // Taxa de câmbio do dólar em relação ao real

            valorDolar = valorReal / taxaCambio;

            printf("Valor em Dólar: %.2f\n", valorDolar);
            break;
         }
         case 2: {
            printf("Digite o valor em Real: ");
            scanf("%f", &valorReal);

            taxaCambio = 6.19; // Taxa de câmbio do euro em relação ao real

            valorEuro = valorReal / taxaCambio;

            printf("Valor em Euro: %.2f\n", valorEuro);
            break;
         }
         case 3: {
            printf("Digite o valor em Dólar: ");
            scanf("%f", &valorDolar);

            taxaCambio = 5.23; // Taxa de câmbio do dólar em relação ao real

            valorReal = valorDolar * taxaCambio;

            printf("Valor em Real: %.2f\n", valorReal);
            break;
         }
         case 4: {
            printf("Digite o valor em Euro: ");
            scanf("%f", &valorEuro);

            taxaCambio = 6.19; // Taxa de câmbio do euro em relação ao real

            valorReal = valorEuro * taxaCambio;

            printf("Valor em Real: %.2f\n", valorReal);
            break;
         }
         case 5:
            printf("Encerrando o programa...\n");
            break;
         default:
            printf("Opção inválida.\n");
            break;
      }
   } while (opcao != 5);

   return 0;
}
