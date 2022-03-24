#include <stdio.h>

int n;
int k;
double newton;

int silniaLiczby(liczba) {
  int silnia = 1;
  
  for(int i = liczba; i > 0; i--) {
    silnia *= i;
  }

  return silnia;
}

int main(void) {
  printf("Podaj n: ");
  scanf("%d", &n);
  printf("Podaj k: ");
  scanf("%d", &k);

  if(n < 0 || k < 0) {
    printf("Liczby musza byc dodatnie");
    printf("\n");
    main();
  }

  int silniaN = silniaLiczby(n);
  int silniaK = silniaLiczby(k);
  int silniaNK = silniaLiczby(n-k);

  newton = silniaN/(silniaK*silniaNK);

  printf("Symbol Newtona wynosi: %lf", newton);
  
  return 0;
}