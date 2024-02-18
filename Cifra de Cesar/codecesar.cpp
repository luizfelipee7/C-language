#include <iostream>
#include <stdio.h>
#include <string.h>

#define MAX 10000

int main() {
  int i, j, x = 0;

  char letras[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
                     'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R',
                     'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

  char frase[MAX];
  printf("\n\n[CODIGO DE CESAR]\n\n");
  printf("INSIRA A FRASE: ");
  fgets(frase, MAX, stdin);

  int tamanho_frase = strlen(frase);
  int qtd_letras = strlen(letras);

  char vet_cripto[tamanho_frase];

  for (i = 0; i <= tamanho_frase; i++) {
    for (j = 0; j <= qtd_letras; j++) {

      if (frase[i] == ' ') {
        vet_cripto[x] = ' ';
        x++;
        break;

      } else if (toupper(frase[i]) == letras[j]) {

        vet_cripto[x] = letras[j + 3];
        x++;
      }
    }
  }
  printf("\nCODIGO DE CESAR: ");
  for (i = 0; i < tamanho_frase; i++) {
    printf("%c", vet_cripto[i]);
  }
}